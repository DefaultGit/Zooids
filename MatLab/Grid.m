%%
clear
close all

%% ~~~~~~~~~~ Physical Properties of Screen ~~~~~~~~~~ %%
WIDTH = 1; HEIGHT = 2; % constans
scrnNumOfPixel = [3840, 2160]; 

scrnWidth = 1.21; scrnHeight = 0.68;

scrnPixelWidth = double(scrnWidth / scrnNumOfPixel(WIDTH));
scrnPixelHeight = double(scrnHeight / scrnNumOfPixel(HEIGHT));

%% ~~~~~~~~~~ Map Input to Output ~~~~~~~~~~ %%
output = uint8(255*ones(scrnNumOfPixel(HEIGHT),scrnNumOfPixel(WIDTH)));
outFig = figure;

xCm=1;
yCm=1;
scale = 0.1;
fullSquareHeight = floor(scrnHeight/scale);
fullSquareWidth = floor(scrnWidth/scale)

for yTV = 1:1:(scrnNumOfPixel(HEIGHT))
    for xTV = 1:1:(scrnNumOfPixel(WIDTH))
        yCm = ceil(((yTV -0.5)*scrnPixelHeight) / scale);
        xCm = ceil(((xTV - 0.5) * scrnPixelWidth)/scale);
        if (((xTV - 0.5) * scrnPixelWidth) > fullSquareWidth * scale) || (((yTV - 0.5) * scrnPixelHeight) > fullSquareHeight * scale)
            output(yTV,xTV) = 195 - mod(xCm+yCm,2)*68;
        else
        if mod(xCm+yCm,2)==1
            output(yTV,xTV) = 0;
            end
        end
    end
end

output = addLines(output);

output = flipud(output);
%output = fliplr(output);


imagesc(output);
imwrite(output, 'grid.png')

function picture = addLines(picture)
    picture(20,5:15)= 0;
    picture(5:15,20)= 0;
end