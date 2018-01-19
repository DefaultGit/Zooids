%%
clear

%% Notes &&
%Most vars are symbolic
%Aspect Ratio in W/H
%Units if not specified in meters
%
%
%Aspect Ratio of Projected area is about 4:3, so for the same height the TV
%has to be longer:
%                 projection 0.63m x 1.00m 
%                 monitor    0.63m x 1.12m

%% ~~~~~~~~~~ Projector ~~~~~~~~~~ %%
%Aspect Ratio of Projcetion (DLP4500) which can be
%(0.63m by 1m) or (1m by 1.59m); in comparison 16/9 == (0.5625 by 1) == (1 by 1.778)
projectorAR=sym(9855/6161.4);
WIDTH = 1;
HEIGHT = 2;
prjNumOfPixel = [912 1140];

projectorWidth = sym(1); %<--------------------------------- Input Screen witdh here

projectorHeight = projectorWidth/projectorAR;
projectorDiag = fWidthToDiag(projectorAR, projectorWidth);

prjPixelWidth = projectorWidth / prjNumOfPixel(WIDTH);
prjPixelHeight = projectorHeight / prjNumOfPixel(HEIGHT);

%% ~~~~~~~~~~ Screen/Monitor/TV ~~~~~~~~~~ %%
%Screen resolution of the TV
screenAR=sym(16/9); %<--------Input the screen resolution of the TV here

scrnNumOfPixel = [3840, 2160]; %<------Input pixel (w x h). I.e. 4k would be 3840 × 2160

screenDiagInch= 55;
inchToMeter(screenDiagInch)
[screenWidth, screenHeight] = fDiagToRectangular(screenAR, inchToMeter(screenDiagInch));
minScreenDiag = fHeightToDiag(screenAR, 0.63);
minScreenDiagInch = mToInch(minScreenDiag);

scrnPixelWidth = screenWidth / scrnNumOfPixel(WIDTH);
scrnPixelHeight = screenHeight / scrnNumOfPixel(HEIGHT);


% %% ~~~~~~~~~ Making a random uncompressed RGB24 AVI Video ~~~~~~~~~ %%
% A = imread('A.png');
% B = imread('B.png');
% C = imread('C.png');
% 
% 
% 
% for i = 1:20*3
%     vid(:,:,:,3*(i-1)+1) = A;
%     vid(:,:,:,3*(i-1)+2) = B;
%     vid(:,:,:,3*(i-1)+3) = C;
% end
% 
% v = VideoWriter('newFile.avi','Uncompressed AVI');
% v.FrameRate = 60
% 
% 
% open(v);
% writeVideo(v,vid);
% close(v);

%% ~~~~~~~~~~ Display results ~~~~~~~~~~ %%
disp("Width x Height of projected image: " + num2str(double(projectorWidth)) + " meter by " + num2str(double(projectorHeight)) + " meter");
disp("Width x Height of " + screenDiagInch + """ TV: " + num2str(double(screenWidth)) + " meter by " + num2str(double(screenHeight)) + " meter");
disp("Minimum TV diagonal: " + num2str(double(minScreenDiagInch)) + " inch (" + num2str(double(minScreenDiag)) + " meter)");
disp("Pixel size of projector (w x h): " + num2str(double(prjPixelWidth)*1000) + " mm by " + num2str(double(prjPixelHeight)*1000) + " mm")
disp("Pixel size of " + screenDiagInch + """ TV (w x h): " + num2str(double(scrnPixelWidth)*1000) + " mm by " + num2str(double(scrnPixelHeight)*1000) + " mm");

%% ~~~~~~~~~~ Convert to double for faster calculation ~~~~~~~~~~ %%
scrnPixelWidth = double (scrnPixelWidth)
scrnPixelHeight = double (scrnPixelHeight)
projectorWidth = double (projectorWidth)
projectorHeight = double (projectorHeight)
prjPixelWidth = double (prjPixelWidth)
prjPixelHeight = double (prjPixelHeight)

%% ~~~~~~~~~~ Map Input to Output ~~~~~~~~~~ %%
%%%%%%%%%%%%TEMP%%%%%%%%%%%%%%%%%%
scale = 1;

prjNumOfPixel = prjNumOfPixel / scale;
scrnNumOfPixel = scrnNumOfPixel / scale;
prjPixelWidth = prjPixelWidth * scale;
prjPixelHeight = prjPixelHeight * scale;
scrnPixelHeight = scrnPixelHeight * scale;
scrnPixelWidth = scrnPixelWidth * scale;
projectorWidth = projectorWidth / scale;
projectorHeight = projectorHeight / scale;

%%% ~~~~~~~~~~ Display wrong dimensions ~~~~~~~~~~ %%
disp("Width x Height of projected image: " + num2str(double(projectorWidth)) + " meter by " + num2str(double(projectorHeight)) + " meter");
disp("Width x Height of " + screenDiagInch + """ TV: " + num2str(double(screenWidth)) + " meter by " + num2str(double(screenHeight)) + " meter");
disp("Minimum TV diagonal: " + num2str(double(minScreenDiagInch)) + " inch (" + num2str(double(minScreenDiag)) + " meter)");
disp("Pixel size of projector (w x h): " + num2str(double(prjPixelWidth)*1000) + " mm by " + num2str(double(prjPixelHeight)*1000) + " mm")
disp("Pixel size of " + screenDiagInch + """ TV (w x h): " + num2str(double(scrnPixelWidth)*1000) + " mm by " + num2str(double(scrnPixelHeight)*1000) + " mm");


% if(true)
%     disp(1);
% elseif(true)
%     disp(2);
% else
%     disp(3);
% end

%%%%%%%%%%%%TEMP%%%%%%%%%%%%%%%%%%


input = rand(prjNumOfPixel(2), prjNumOfPixel(1)); % resolution of projector
output = zeros(scrnNumOfPixel(2),scrnNumOfPixel(1));

x1=1;
y2=1;

inFig=figure;
imshow(input);

outFig = figure;
imshow(output);

% ASSUMES THAT THE TV PIXELS ARE ALAYS SMALLER THEN THE PROJECTOR PIXELS
for yTV = 1:1:(scrnNumOfPixel(2))
    if ((yTV * scrnPixelHeight) > projectorHeight)
        output(yTV,:)=0;
    elseif (((yTV - 0.5) * scrnPixelHeight) >= (y2 * prjPixelHeight))
        for xTV = 1:1:(scrnNumOfPixel(1))
            if ((xTV * scrnPixelWidth) > projectorWidth)
                output(yTV,xTV) = 0;
            elseif ((xTV * scrnPixelWidth) >= (x2 * prjPixelWidth)) 
                x2 = x2 + 1;
%             elseif 
%                 y2 = y2 + 1;
            else
                output(yTV,xTV) = input(y2, x2);
            end
            x2
            y2
        end
    end
    yTV
end

outFig = figure;
imshow(output);

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