%%
clear
close all

%% ~~~~~~~~~~ Screen/Monitor/TV ~~~~~~~~~~ %%
WIDTH = 1;
HEIGHT = 2;
scrnNumOfPixel = [3840, 2160]; 

screenWidth = 1.21;
screenHeight = 0.68;

scrnPixelWidth = screenWidth / scrnNumOfPixel(WIDTH);
scrnPixelHeight = screenHeight / scrnNumOfPixel(HEIGHT);

%% ~~~~~~~~~~ Convert to double for faster calculation ~~~~~~~~~~ %%
scrnPixelWidth = double (scrnPixelWidth)
scrnPixelHeight = double (scrnPixelHeight)

%% ~~~~~~~~~~ Map Input to Output ~~~~~~~~~~ %%
output = uint8(255*ones(scrnNumOfPixel(HEIGHT),scrnNumOfPixel(WIDTH)));

xCm=1;
yCm=1;

outFig = figure;

scale = 0.1;

% ASSUMES THAT THE TV PIXELS ARE ALAYS SMALLER THEN THE PROJECTOR PIXELS
for yTV = 1:1:(scrnNumOfPixel(HEIGHT))
        yCm = ceil(((yTV -0.5)*scrnPixelHeight) / scale);
        for xTV = 1:1:(scrnNumOfPixel(WIDTH))
                xCm = ceil(((xTV - 0.5) * scrnPixelWidth)/scale);
                if mod(xCm+yCm,2)==1
                    output(yTV,xTV) = 0;
                end
        end
end

imagesc(output);
imwrite(output, 'grid.png')

%% ~~~~~~~~~ Functions ~~~~~~~~~~ %%
function inch = mToInch(meter)
    inch = meter/0.0254;
end
function meter = inchToMeter(inch)
    meter = inch*0.0254;
end

function diag = fHeightToDiag(AR, height)
    diag = sqrt(1+sym(AR)^2)*sym(height);
end

function diag = heightToDiag(AR, height)
    diag = double(fHeightToDiag(AR,height));
end

function diag = fWidthToDiag(AR, height)
    diag = sqrt(1+sym(AR)^2)*sym(height);
end

function diag = widthToDiag(AR, height)
    diag = double(fWidthToDiag(AR,height));
end

function [width, height] = fDiagToRectangular(AR, diag)
    width = (sym(diag)/sqrt(1+(1/sym(AR))^2));
    height = (sym(diag)/sqrt(1+(sym(AR))^2));
end

function [width, height] = diagToRectangular(AR, diag)
    [width, height] = double(fDiagToRectangular(AR, diag));
end