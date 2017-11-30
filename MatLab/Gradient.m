%{
|-----Width-----|

* * * * * * * * *     -
*               *     |
*               *     |
*               *     |
*               *     |
*      DLP      *   Height
*               *     |
*               *     |
*               *     |
*               *     |
* * * * * * * * *     -


%}

clear all
close all

WIDTH = 912;    %Pixel
HEIGHT = 1140;  %Pixel

R0=fi(1,0,1); %Number 1, unsigned, wordlenght 1
%Notes: fixed point numbers and bitset

matrix = uint8(zeros(HEIGHT,WIDTH,3));

%{
bmp = imread('bmp.bmp');
%}

for i = 1:(HEIGHT)
    for j = 1:(WIDTH/3)
        matrix(i,j,1)=uint8(i/4);
    end
    
    for j = (1+WIDTH/3):(WIDTH*2/3)
        matrix(i,j,2)=uint8(i/4);
    end
    
    for j = (1+2*WIDTH/3):(WIDTH)
        matrix(i,j,3)=uint8(i/4);   
    end
end

%imshow(matrix) DONT USE THIS
close all

m = figure;
image(matrix);

%{
b = figure;
image(bmp);

l = figure;
image(leaf);
%}

imwrite(matrix,'gradient.bmp')