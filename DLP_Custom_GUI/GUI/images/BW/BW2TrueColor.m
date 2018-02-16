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

DATA_TYPE = 'bmp';

%ToDo: Automaticly getting the HOME Path and Paths from the JSON file
HOME = '../../';
jsontemp = jsondecode(fileread(strcat(HOME,'path_config.json')));
%dir(strcat(HOME,jsontemp.bw));
TARGET_PATH = (strcat(HOME,jsontemp.TrueColor));

outputPicNumber = 0;

channelBit = 0;
channelIndex = 1;
channelOffset = [3,2,1]; %GRB
outputIndex = 1;
outputPic = uint8(zeros(1140,912,3));
files=0;
for i=1:1:NUM_OF_FILES
    currentFile = FOLDER_INFO(i).name;
    
    if channelBit > 7 %Only 8 bits per Channels
        channelIndex = channelIndex + 1; %Change channel, once all bits are set
        if channelIndex > 3 % 3 Channels
            imwrite(outputPic, strcat(TARGET_PATH,'TrueColor', num2str(outputIndex),'.bmp'));
            outputPic = uint8(zeros(1140,912,3));
            outputIndex = outputIndex + 1; %change picture, once all channels are set
            channelIndex = mod(channelIndex, 3);
        end
        channelBit = mod(channelBit,8);
    end
    
    %if file is bmp
    if strcmp(DATA_TYPE, fileExtension(FOLDER_INFO(i).name))            %fileName((end-3):end)) && ~((strcmp(fileName, cat(2, matlabFileName, '.m')) || strcmp(fileName, cat(2, matlabFileName, '.asv')) || strcmp(fileName, '.') || strcmp(fileName, '..')))         
        input = uint8(imread(currentFile)); %Read File
        input = input(:,:,1);               %If Picture not Single Channel, only use the first channel
        try
            input = imbinarize(input);      %Convert picture to single bit depth
        catch
            disp('Picture is binary');
        end
        input = uint8(input.*(2^(channelBit))); %Bitshift whole Matrix
        
        outputPic(:,:,channelOffset(channelIndex)) = bitor(outputPic(:,:,channelOffset(channelIndex)),input); %Set bits
        channelBit = channelBit + 1;
        files=files+1
    end
end
if ~(channelBit == 0 && channelIndex == 1)
    imwrite(outputPic, strcat(TARGET_PATH,'TrueColor', num2str(outputIndex),'.bmp'))
end
            
%% Functions 

function extension = fileExtension(string)
    extension = string(find(string == '.', 1, 'last') +1 : end);
end