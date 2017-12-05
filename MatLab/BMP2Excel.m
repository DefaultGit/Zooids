A = imread('bmp2excel.bmp')

xlswrite('bmp2excel.xlsx',A(:,:,1),1);
xlswrite('bmp2excel.xlsx',A(:,:,2),2);
xlswrite('bmp2excel.xlsx',A(:,:,3),3);