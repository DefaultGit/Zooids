clear;
close all;

%{
Take bitmap double.bmp and double it in size
Do this "repeat" times.
%}

%Var declaration
pic = imread('Pictures\double.bmp');
repeat = 7

%Call function repeat times and Save the resultin Image as "sized.bmp"
for i = 1:repeat
    pic=double(pic);
end
imwrite(pic,'Pictures\doubleBig.bmp');

%Function to make a bitmap bigger by copying each element to 3 neighbouring
%pixels (East, South and diagonally South East pixel)
function sized = double(pic)
    dimPic = size(pic);
    if size(dimPic) == [1 3]
        for i = 1:(dimPic(1))
            for j = 1:(dimPic(2))
                for k = 1:(dimPic(3))
                    sized(2*i-1 , 2*j-1 , k)=pic(i,j,k);
                    sized(2*i-1 , 2*j , k)=pic(i,j,k);
                    sized(2*i , 2*j-1 , k)=pic(i,j,k);
                    sized(2*i , 2*j , k)=pic(i,j,k);
                end
            end
        end
    end
end