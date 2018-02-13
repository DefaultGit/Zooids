%%
close all
clear

%% Sources
%https://de.mathworks.com/matlabcentral/answers/276217-write-an-image-name-to-particular-folder-using-imwrite
%https://de.mathworks.com/matlabcentral/answers/34765-comparing-extensions
%https://de.mathworks.com/help/matlab/ref/mfilename.html
%https://de.mathworks.com/help/matlab/ref/dir.html#responsive_offcanvas

%% Run this script to combine 24 1-Bit BMPs to one 24-Bit BMP. png files in the folder into another folder ../bmp/ as .bmp files (overwrites old files)
%matlabFileName = mfilename; %File name of this script
FOLDER_INFO = dir;
NUM_OF_FILES = length(FOLDER_INFO);

TARGET_PATH = '../24-Bit_BMPs/';
DATA_TYPE = 'bmp';

HOME = '../../'

jsontemp = jsondecode(fileread(strcat(HOME,'path_config.json')))
dir(strcat(HOME,jsontemp.img,jsontemp.bw))


NUM_OF_TARGET_FILE_TYPE = 0;

outputPicNumber = 0;

currentFileName = FOLDER_INFO(1).name
outputPic = uint8(zeros(912,1140,));

for i=1:1:NUM_OF_FILES
    if strcmp(DATA_TYPE, fileExtension(FOLDER_INFO(i).name))            %fileName((end-3):end)) && ~((strcmp(fileName, cat(2, matlabFileName, '.m')) || strcmp(fileName, cat(2, matlabFileName, '.asv')) || strcmp(fileName, '.') || strcmp(fileName, '..')))         
        %pic = imread(fileName);
        %fullDestinationFileName = cat(2, TARGET_PATH, fileName(1:end-4), '.bmp')
        %imwrite(pic, fullDestinationFileName, 'bmp');
        NUM_OF_TARGET_FILE_TYPE = 1 + NUM_OF_TARGET_FILE_TYPE;
    end
end

for i=1:1:NUM_OF_FILES
    if strcmp(DATA_TYPE, fileExtension(FOLDER_INFO(i).name))            %fileName((end-3):end)) && ~((strcmp(fileName, cat(2, matlabFileName, '.m')) || strcmp(fileName, cat(2, matlabFileName, '.asv')) || strcmp(fileName, '.') || strcmp(fileName, '..')))         
        %pic = imread(fileName);
        %fullDestinationFileName = cat(2, TARGET_PATH, fileName(1:end-4), '.bmp')
        %imwrite(pic, fullDestinationFileName, 'bmp');
        NUM_OF_TARGET_FILE_TYPE = 1 + NUM_OF_TARGET_FILE_TYPE;
    end
end

for i=1:1:NUM_OF_TARGET_FILE_TYPE
    
end

%% Functions 

function extension = fileExtension(string)
    extension = string(find(string == '.', 1, 'last') +1 : end);
end