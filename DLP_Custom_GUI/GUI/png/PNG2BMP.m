%%
close all
clear

%% Sources
%https://de.mathworks.com/matlabcentral/answers/276217-write-an-image-name-to-particular-folder-using-imwrite
%https://de.mathworks.com/matlabcentral/answers/34765-comparing-extensions
%https://de.mathworks.com/help/matlab/ref/mfilename.html
%https://de.mathworks.com/help/matlab/ref/dir.html#responsive_offcanvas

%% Run this script to save all .png files in the folder into another folder ../bmp/ as .bmp files (overwrites old files)
matlabFileName = mfilename;
folderInfo = dir;
NUM_OF_PNG = length(folderInfo);


if (NUM_OF_PNG > 3)
    for i =1:1:(NUM_OF_PNG)
        fileName = folderInfo(i).name;
        strcmp(fileName, cat(2, fileName, '.asv')); 
        strcmp('png', fileExtension(folderInfo(i).name))
        if strcmp('png', fileExtension(folderInfo(i).name))            %fileName((end-3):end)) && ~((strcmp(fileName, cat(2, matlabFileName, '.m')) || strcmp(fileName, cat(2, matlabFileName, '.asv')) || strcmp(fileName, '.') || strcmp(fileName, '..')))         
            pic = imread(fileName);
            fullDestinationFileName = cat(2, '../bmp/', fileName(1:end-4),'.bmp')
            imwrite(pic, fullDestinationFileName, 'bmp');
        end
    end
end

function extension = fileExtension(string)
    extension = string(find(string == '.', 1, 'last') +1 : end);
end