%% Clear and close all
%close all;
clearvars -except outputFigure inputFigure imageFigure


%%%%%%%%%%%%%%%%%%%%%
%COLOR MAPS
%
%   R   G   B
%       Low
%        |
%       High
%%%%%%%%%%%%%%%%%%%%%
%% Declare Simbolic Variables %%
syms x y t;
syms mag pwrDec pwrDecX pwrDecY;
%Magnitude, PowerDecay in X and Y 
syms drDec drDecX drDecY; %decay
%Slote of the exponential Funktion for a 2D function and for 3D function
%which can also be described as the decay of the wave for a small change in
%the radius [dr] for a given time t)
syms tDec tDecX tDecY ;
%
syms offSet offSetX offSetY;

%% Variables
interval = [0 911 0 1139];
colorBits=8; %max 6 (2^6=64)
maxMag = 2^colorBits-1;
newColormap = zeros(2^colorBits, 3);
%Colormap usually has 64 rows

for i = 1:1:2^colorBits
    %cmap = flipud(winter(64));
    cmap = flipud(hot(2*2^colorBits));
    newColormap(i,:) = cmap((i-1)*2*2^colorBits/(2^colorBits)+1,:);
end
% cmap = newColormap;

%% Declare Fuctions %%
twoDimWave (x   , t, mag, pwrDec          , drDec         , tDec        , offSet)            =  mag*0.5*exp(-pwrDec*t)*(exp(-(1/drDec)*(x-offSet+tDec*t)^2)+exp(-(1/drDec)*(x-offSet-tDec*t)^2));                       %(x, t, mag, pwrDec, drDec, tDec, offSet)
fourHills  (x, y, t, mag, pwrDecX, pwrDecY, drDecX, drDecY, tDecX, tDecY, offSetX, offSetY)  =  twoDimWave(x,t,sqrt(mag),pwrDecX,drDecX,tDecX,offSetX)*twoDimWave(y,t,sqrt(mag),pwrDecX,drDecY,tDecY,offSetY);      %(x, y, t, mag, pwrDecX, pwrDecY, drDecX, drDecY, tDecX, tDecY, offSetX, offSetY)
line       (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY)  =  mag*exp(-pwrDec*t)*exp(-(1/drDec)*(    ((1/tDecX)*   (x-offSetX)  +(1/tDecY)*   (y-offSetY))  -t)^2);               %(x, y, t, mag, pwrDec, drDec, tDecX, tDecY, offSetX, offSetY)
diamond    (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY)  =  mag*exp(-pwrDec*t)*exp(-(1/drDec)*(    ((1/tDecX)*abs(x-offSetX)  +(1/tDecY)*abs(y-offSetY))  -t)^2);               %(x, y, t, mag, pwrDec, drDec, tDecX, tDecY, offSetX, offSetY)
wave       (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY)  =  mag*exp(-pwrDec*t)*exp(-(1/drDec)*(sqrt((1/tDecX)*   (x-offSetX)^2+(1/tDecY)*   (y-offSetY)^2)-t)^2);               %(x, y, t, mag, pwrDec, drDec, tDecX, tDecY, offSetX, offSetY)

%% Figure Options

% g=groot;
% if (~isempty(g.Children))
%     outputFigure = figure;
%     inputFigure = figure;
% end
try
    if (~ishghandle(outputFigure))
        outputFigure = figure;
    end
catch
    outputFigure = figure;
end

outputFigure.Units = 'normalized';
outputFigure.OuterPosition(1) = 0;
%40 pixel taskbar, 8 pixel lower window bar, 84 pixel upper window bar
outputFigure.OuterPosition(2) = 0 + (40)/1080;
outputFigure.Units = 'pixels';
%axOutput = axes('Position',[0.65 0.65 0.28 0.28]);
%fsurf(sym(0),[0 912 0 1140],'MeshDensity',1);
%outputFigure.Position(1) = [680 558 (570+230) (456+74)];
outputFigure.Position(3) = 1140+230;
outputFigure.OuterPosition(4) = 1080-40;%-8-84; 
outputFigure.Units = 'normalized';
%pause(1)
%outputFigure.OuterPosition = [1-outputFigure.OuterPosition(3) 1-outputFigure.OuterPosition(4) outputFigure.OuterPosition(3) outputFigure.OuterPosition(4)]
%outputFigure.Units = 'pixels';
%xlabel('X'); ylabel('Y'); zlabel('Z');

% try
%     if (ishandle(inputFigure)==0)
%         inputFigure = figure;
%     end
% catch ME
%     ME.identifier
%     inputFigure = figure;
% end

try
    if (~ishghandle(inputFigure))
        inputFigure = figure;
    end
catch
    inputFigure = figure;
end
%fsurf(sym(0),[0 912 0 1140],'MeshDensity',1);
%inputFigure.Position = [1200 400 (570+70) (456)];

inputFigure.Units = 'normalized';
inputFigure.OuterPosition(1) = 0;
inputFigure.OuterPosition(2) = 0 + (40)/1080;
inputFigure.Units = 'pixels';
inputFigure.Position(3) = 1140+230;
inputFigure.OuterPosition(4) = 1080-40;
inputFigure.Units = 'normalized';

%% Axis Output Options

figure(outputFigure)
axOutput = gca; 
xlabel('X'); ylabel('Y'); zlabel('Z');
view(2);%look at X-Y Plane
grid on
outputFigure.CurrentAxes.ZAxis.Limits = [-1 maxMag];
axis vis3d; %Fixed Aspect Ratio Axes
outputFigure.Name = 'Output Figure';
view([-90,90]);
set (axOutput,'Ydir','reverse');

cmapOut = colormap(outputFigure,newColormap);
caxOut = caxis(axOutput);
caxOut = [0 maxMag];

%% Axis Input
figure(inputFigure)
axInput = gca; 
xlabel('X'); ylabel('Y'); zlabel('Z');

%view(2); %look at X-Y Plane
grid on
inputFigure.CurrentAxes.ZAxis.Limits = [-1 maxMag];
axis vis3d; %Fixed Aspect Ratio Axes
inputFigure.Name = 'Input Figure'; 
view([-90,90]) %x-y plane but turned by -90 degree
set(axInput,'Ydir','reverse')

cmapIn = colormap(inputFigure,newColormap)
caxIn = caxis(axInput);
caxIn = [0 maxMag];

%% Axes Both
axOutput.Units = 'pixels';
axInput.Units  = 'pixels';
%axOutput.XTick = 0:91.2:912; axOutput.YTick = 0:114:1140; axOutput.ZTick = 0:(maxMag/5):maxMag;
%axInput.XTick  = 0:91.2:910; axInput.YTick  = 0:114:1140; axInput.ZTick  = 0:(maxMag/5):maxMag;
axOutput.DataAspectRatio = [0.8*6161.4/9855, 1, (0.8*6161.4/9855)*5*maxMag/1140]; %Pixel Array is 9855um by 6161.5um in size. Also, the aspect ratio of the number of pixels is 912 by 1140
axInput.DataAspectRatio  = [1,               1,                   5*maxMag/1140]; %Pixel Array is 9855um by 6161.5um in size. Also, the aspect ratio of the number of pixels is 912 by 1140

%pause(1)
axOutput.Position(1) = 1;
axOutput.Position(2) = 50;
% axOutput.Position(1) = 150;
% axOutput.Position(2) = 50;
axOutput.Position(3) = 1140;
axOutput.Position(4) = 912;
axInput.Position(1) = 70;
axInput.Position(2) = 70;%70
axInput.Position(3) = 1140;
axInput.Position(4) = 912;

%ax.DataAspectRatioMode = 'manual'; %not working

inputFigure.CurrentAxes.XAxis.Limits = [0 911];
inputFigure.CurrentAxes.YAxis.Limits = [0 1139];
outputFigure.CurrentAxes.XAxis.Limits = [0 911];
outputFigure.CurrentAxes.YAxis.Limits = [0 1139];
%ax.OuterPosition=[-100 0 ax.OuterPosition(3) ax.OuterPosition(4)];
%ax.XTick = [0:61.615:912];
%ax.YTick = [0:98.55:1140];

%% Plot Input
figure(inputFigure)
hold on
%plot3(0:1:911,0:1:911,ones(1,911+1).*maxMag); %Diagonal Line with slope 1 (dY/dX)
scatter3(0:1:911, 0:1:911, (0:maxMag/(911):maxMag),5,(0:maxMag/(911):maxMag));%ones(1,911+1).*maxMag); %Diagonal Line with slope 1 (dY/dX)
%FourHills 1
t_FH1 = 0; 
mag_FH1 = maxMag; 
pwrDecX_FH1 = 0; pwrDecY_FH1 = 0; 
drDecX_FH1 = 1000; drDecY_FH1 = 2*drDecX_FH1;
tDecX_FH1 = 2; tDecY_FH1 = 2*tDecX_FH1; 
offSetX_FH1 = interval(2)/2; offSetY_FH1 = interval(4)/2;

%Wave 1
t_W1 = 0;
mag_W1 = maxMag;
pwrDec_W1 = 0.01;
drDec_W1 = 1000;
tDecX_W1 = 2;
tDecY_W1 = 2;
offSetX_W1 = 456;
offSetY_W1 = 570;
eqn = wave(x, y, t_W1, mag_W1, pwrDec_W1, drDec_W1, tDecX_W1, tDecY_W1, offSetX_W1, offSetY_W1);
%eqn = eqn + fourHills(x, y, t_FH1, mag_FH1, pwrDecX_FH1, pwrDecY_FH1, drDecX_FH1, drDecY_FH1, tDecX_FH1, tDecY_FH1, offSetX_FH1, offSetY_FH1)
fsurf(eqn,[0 911 0 1139]);


%% Plot Output 
%THERE IS AN ERROR SOMEWHERE HERE THAT MESSES WITH THE WINDOW SIZE
figure(outputFigure)
hold on;
scatter3(0:1:911, 0:1:911, (0:maxMag/(911):maxMag),5,(0:maxMag/(911):maxMag));%ones(1,911+1).*maxMag); %Diagonal Line with slope 1 (dY/dX)
%GETS A NEW COLOR EVERY TIME THIS IS RUN

fsurf(eqn,[0 911 0 1139]);

%% Make Image
outputImage = zeros(912, 1140);

FUN = matlabFunction(eqn);
for i = 1:1:912
    for j = 1:1:1140
        outputImage(i,j)=feval(FUN,i,j)/maxMag;
    end
end
% x0 = 1:10000;               % Assume that we want to evaluate the function in these points
% FUN = matlabFunction(fun);  % This creates a function handle
% y = feval(FUN, x0);         % Evaluates the new function handle at the specified points
%fcontour(eqn)

% function out = discretize(in)
%     out = uint8(in);
% end

%meshc
%FaceLighting

%colormap hsv
%colorbar('southoutside')
% colormap default
colormap(outputFigure,newColormap)
colormap(inputFigure,newColormap)
caxis(axInput,[0 maxMag])
caxis(axInput,[0 maxMag])

%ax.Units='normalized'

outputFigure.Units = 'pixels';
outputFigure.OuterPosition(4) = 1080-40;%-8-84; 
outputFigure.Units = 'normalized';

%ax.CameraTarget = [456 570 mag/2];
%ax.CameraPosition=[456 570 mag];
%ax.Units='centimeters';
%ax.Position=[0 0 3*5.70 3*4.56];

%% Image Figure
% f=getframe(gcf);
% new=f.cdata;
% imwrite(new,'new.jpg','JPEG');

try
    if (~ishghandle(imageFigure))
        imageFigure = figure;
    end
catch
    imageFigure = figure;
end
figure(imageFigure);
imshow(outputImage,newColormap);
axImage = gca;
colorbar;

%cla
%drawnow

%% Axes Image
figure(imageFigure);
axImage = gca;
imageFigure.Name = 'Image Figure';
imagesc(outputImage)
cmapIm = colormap(imageFigure, newColormap);
caxis(gca,[0 maxMag]);
set(gca, 'CLim', [0 255])





%fsurf(sym(mag),[0 912 0 1140]);

%f1 = figure;
%fplot(twoDimWave(x,0,2,10,2));
%f1.Position = [f1.Position(1)-f1.Position(3) f1.Position(2) f1.Position(3) f1.Position(4)]
%f2 = figure;
%fplot(twoDimWave(x,0.5,2,10,2));
%f3 = figure;
%f3.Position = [f3.Position(1)+f3.Position(3) f3.Position(2) f3.Position(3) f3.Position(4)]
%
fplot(twoDimWave(x,1,2,10,2));