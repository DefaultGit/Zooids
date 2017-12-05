clear;
close all;

%declare range that should be read from the excel file
%xlRange = 'A1:Q17'; % 0 == black, 255 == full intensity
%Currently 'A1:AX50' is filled in (with mostly zeros)


%red red, green and blue channel from excel spreadsheet
r = uint8(xlsread('bmp.xlsx', 1));%, xlRange));
g = uint8(xlsread('bmp.xlsx', 2));%, xlRange));
b = uint8(xlsread('bmp.xlsx', 3));%, xlRange));

%{
for i = 1:3
    for j = 1:3
        for k = 1:3
            A(j,k,i)= k-1 + (j-1)*3 + (i-1)*9;
        end
    end
end
%}

%add red, green and blue channel into one picture
pic(:,:,1) = g;
pic(:,:,2) = r;
pic(:,:,3) = b;

imwrite(pic,'double.bmp');