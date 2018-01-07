%% Clear and close all
%close all;
clearvars -except outputFigure inputFigure

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
colorBits=2; %max 6 (2^6=64)
maxMag = 2^colorBits-1;
newColormap = zeros(2^colorBits, 3);
%Colormap usually has 64 rows

for i = 1:1:2^colorBits
    %cmap = flipud(winter(64));
    cmap = flipud(hot(64));
    newColormap(i,:) = cmap((i-1)*64/(2^colorBits)+1,:);
end

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
outputFigure.OuterPosition(1) = 0
outputFigure.OuterPosition(2) = 0 + (40)/1080
outputFigure.Units = 'pixels';
%axOutput = axes('Position',[0.65 0.65 0.28 0.28]);
%fsurf(sym(0),[0 912 0 1140],'MeshDensity',1);
%outputFigure.Position(1) = [680 558 (570+230) (456+74)];
outputFigure.Position(3) = 1140+230;
outputFigure.OuterPosition(4) = 1080-40;
outputFigure.Units = 'normalized';
%pause(1)
%outputFigure.OuterPosition = [1-outputFigure.OuterPosition(3) 1-outputFigure.OuterPosition(4) outputFigure.OuterPosition(3) outputFigure.OuterPosition(4)]
%outputFigure.Units = 'pixels';
xlabel('X'); ylabel('Y'); zlabel('Z');

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
inputFigure.OuterPosition(1) = 0
inputFigure.OuterPosition(2) = 0 + (40)/1080
inputFigure.Units = 'pixels';
inputFigure.Position(3) = 1140+230;
inputFigure.OuterPosition(4) = 1080-40;
inputFigure.Units = 'normalized';
xlabel('X'); ylabel('Y'); zlabel('Z');

%% Axis Options

figure(outputFigure)
axOutput = gca; 
view(2);%look at X-Y Plane
grid on
outputFigure.CurrentAxes.ZAxis.Limits = [-1 maxMag];
axis vis3d; %Fixed Aspect Ratio Axes
outputFigure.Name = 'Output Figure';

figure(inputFigure)
axInput = gca; 
view(2); %look at X-Y Plane
grid on
inputFigure.CurrentAxes.ZAxis.Limits = [-1 maxMag];
axis vis3d; %Fixed Aspect Ratio Axes
inputFigure.Name = 'Input Figure';

axOutput.Units = 'pixels';
axInput.Units  = 'pixels';
%axOutput.XTick = 0:91.2:912; axOutput.YTick = 0:114:1140; axOutput.ZTick = 0:(maxMag/5):maxMag;
%axInput.XTick  = 0:91.2:910; axInput.YTick  = 0:114:1140; axInput.ZTick  = 0:(maxMag/5):maxMag;
axOutput.DataAspectRatio = [0.8*6161.4/9855, 1, (0.8*6161.4/9855)*5*maxMag/1140]; %Pixel Array is 9855um by 6161.5um in size. Also, the aspect ratio of the number of pixels is 912 by 1140
axInput.DataAspectRatio  = [0.5,               0.5,                   5*maxMag/1140/2]; %Pixel Array is 9855um by 6161.5um in size. Also, the aspect ratio of the number of pixels is 912 by 1140

%pause(1)
axOutput.Position(1) = 150;
axOutput.Position(2) = 50;
axOutput.Position(3) = 1140;
axOutput.Position(4) = 912;
axInput.Position(1) = 230;
axInput.Position(2) = 70;
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
plot3(0:1:911,0:1:911,ones(1,911+1).*maxMag); %Diagonal Line with slope 1 (dY/dX)

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
figure(outputFigure)
hold on;
%plot3(0:1:912,0:1:912,ones(1,912+1).*maxMag); %Diagonal Line with slope 1 (dY/dX)

fsurf(eqn,[0 911 0 1139]);
outputImage = zeros(912, 1140);

% for i = 1:1:912
%     for j = 1:1:1140
%         value=eqn;
%         value=subs(value,x,i);
%         value=subs(value,y,j);
%         test=j
%         value=uint8(value);
%         outputImage(i,j)=value;
%     end
%     progress=i
% end
%fcontour(eqn)


% fsurf(fourHills(x,y,100),interval,'LineStyle','-','MeshDensity',21);
% 
% fsurf(diamond(x,y,100,2,500,1000),'LineStyle','--','MeshDensity',21)
% 
% fsurf(line(x,y,100,2,200,1000),'LineStyle',':','MeshDensity',21)
% 
% fsurf(wave(x,y,0.000001,2,200,1000),'LineStyle','-.','MeshDensity',21)
% fsurf(wave(x,y,100,2,200,1000),'LineStyle','-','MeshDensity',21)
% fsurf(wave(x,y,200,2,200,1000),'LineStyle','-','MeshDensity',21)
% fsurf(wave(x,y,300,2,200,1000),'LineStyle','-','MeshDensity',21)
% fsurf(wave(x,y,400,2,200,1000),'LineStyle','-','MeshDensity',21)

%meshc
%FaceLighting

%colormap hsv
%colorbar('southoutside')
% colormap default
colormap(outputFigure,newColormap)
colormap(inputFigure,newColormap)
caxis([0 maxMag])

%ax.Units='normalized'


%ax.CameraTarget = [456 570 mag/2];
%ax.CameraPosition=[456 570 mag];
%ax.Units='centimeters';
%ax.Position=[0 0 3*5.70 3*4.56];

%fsurf(sym(mag),[0 912 0 1140]);

%f1 = figure;
%fplot(twoDimWave(x,0,2,10,2));
%f1.Position = [f1.Position(1)-f1.Position(3) f1.Position(2) f1.Position(3) f1.Position(4)]
%f2 = figure;
%fplot(twoDimWave(x,0.5,2,10,2));
%f3 = figure;
%f3.Position = [f3.Position(1)+f3.Position(3) f3.Position(2) f3.Position(3) f3.Position(4)]
%fplot(twoDimWave(x,1,2,10,2));