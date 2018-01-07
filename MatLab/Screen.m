clear

ProjectorAR=sym(9855/6161.4);
%Aspect Ratio (Width/Heigth) of projected image is about 0.63 by 1
%or about 1 by 1.59
ScreenAR=sym(16/9);
%Aspect Ratio of common monitor is about 0.5625 by 1
%or about 1 by 1.778

% => to achieve a projection image that is 0.63m x 1.00m 
%              the monitor has to be about 0.63m x 1.12m
[ScreenWidth ScreenHeight] = fDiagToRectangular(128.5);
ScreenWidth = double(ScreenWidth)
ScreenHeight = double(ScreenHeight)
minDiag = double(fHeigthToDiag(0.63))
diagInInch = mToInch(minDiag)


%'Uncompressed AVI' Uncompressed AVI file with RGB24 video
A = imread('A.png');
B = imread('B.png');
C = imread('C.png');

vid(:,:,:,1) = A;
vid(:,:,:,2) = B;
vid(:,:,:,3) = C;

v = VideoWriter('newFile.avi','Uncompressed AVI');

open(v)
writeVideo(v,vid)
close(v)

function inch = mToInch(meter)
    inch = meter*39.3701;
end

function diag = fHeigthToDiag(heigth)
    ScreenAR = sym(16/9);
    diag = sqrt(1+(ScreenAR)^2)*heigth;
end

function [width heigth] = diagToRectangular(diag)
    ScreenAR = sym(16/9);
    width = double(diag/sqrt(1+(1/ScreenAR)^2));
    heigth = double(diag/sqrt(1+(ScreenAR)^2));
end

function [width heigth] = fDiagToRectangular(diag)
    ScreenAR = sym(16/9);
    width = diag/sqrt(1+(1/ScreenAR)^2);
    heigth = diag/sqrt(1+(ScreenAR)^2);
end

