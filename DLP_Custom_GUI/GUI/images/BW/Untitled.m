try 
    exist(HOME,'var'); % Check if the Variable exists in the Workspace
    if isempty(find(strcmp({list(:).name},MAIN)))
        throw(exception);
    end
catch
    HOME = './'; % Sets home to the folder of this matlab script
end
%pwd is current folder
parent.name = '..';
MAIN = 'main.cpp'; % (Full) Name of main file for GUI
list = dir(HOME); % Search Directorys for main file

try
    index = find(strcmp({list(:).name},MAIN)); % returns the index of a file/folder named like MAIN
    if (list(index).bytes ~= 0) && ~list(index).isdir %see if there is a file named like MAIN
        disp(cat(2,'Home has not changed: ',HOME));
    else
        %Why is there no do while loop in matlab?...
        index =  find(strcmp({list(:).name},parent.name));
        disp(cat(2,'found no ', MAIN, ' file that is not empty in ', list(index).folder));
        while (~isempty(index)) % while there is another parent folder
            disp(cat(2,'found no ', MAIN, ' file that is not empty in ', list(index).folder));
            HOME = cat(2,'../', HOME);
            list = dir(HOME); % Search Directorys for main file
            index =  find(strcmp({list(:).name},parent.name));
        end
    end
catch NoHome
    disp('Exception: main.cpp file could not be found! Run code again to reset HOME');
    clear HOME;
end

%strcmp({list.name},{'main.cpp'})