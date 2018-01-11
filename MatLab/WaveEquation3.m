%% Clear Workspace
close all
clear
clearvars -except figOut figIn figTV

%% ~~~~~~~~~~ Constants ~~~~~~~~~~ %%
bitDiscretization = 4;
maxMag = 2^bitDiscretization -1;
newColormap = zeros(2^bitDiscretization, 3);

% ----- Colormap generation ----- %
for i = 1:1:2^bitDiscretization
    temp = hot(2*2^bitDiscretization);
    newColormap(i,:) = temp((i-1)*2*2^bitDiscretization/(2^bitDiscretization)+1,:);
end
clear temp

%% ~~~~~~~~~~ Symbolic Functions: ~~~~~~~~~~ %%
% ----- Variables the functions depend on ----- %
syms x y t;

% ----- Constants that change the property of the Functions ----- %
%Magnitude before decay, PowerDecay in X and Y
syms mag pwrDec pwrDecX pwrDecY;
%Slope of the exponential Funktion for a 2D function and for 3D function
%which can also be described as the decay of the wave for a small change in
%the radius [dr] for a given time t)
syms drDec drDecX drDecY;
%Propagation speed
syms tDec tDecX tDecY;
%Relative offset in x and y
syms offSet offSetX offSetY;

% ----- Functions themself ----- %
twoDimWave (x   , t, mag, pwrDec          , drDec         , tDec        , offSet)            =  sqrt(mag)*0.5*exp(-t/pwrDec)*(exp(-(1/drDec)*(x-offSet+tDec*t)^2)+exp(-(1/drDec)*(x-offSet-tDec*t)^2));                   % mag = ; pwrDec = ; drDec = ; tDec = ; offSet = ;
%Just multiply twoDimWave(x) with TwoDimWave(y) %fourHills  (x, y, t, mag, pwrDecX, pwrDecY, drDecX, drDecY, tDecX, tDecY, offSetX, offSetY)  =  twoDimWave(x,t,sqrt(mag),pwrDecX,drDecX,tDecX,offSetX)*twoDimWave(y,t,sqrt(mag),pwrDecX,drDecY,tDecY,offSetY);      % mag = ; pwrDecX = ; pwrDecY = ; drDecX = ; drDecY = ; tDecX = ; tDecY = ;offSetX = ;offSetY = ;
line       (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY)  =  mag*exp(-t/pwrDec)*exp(-(1/drDec)*(    ((1/tDecX)*   (x-offSetX)  +(1/tDecY)*   (y-offSetY))  -t)^2);               % mag = ; pwrDec = ; drDec = ; tDecX = ; tDecY = ;offSetX = ;offSetY = ;
diamond    (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY)  =  mag*exp(-t/pwrDec)*exp(-(1/drDec)*(    ((1/tDecX)*abs(x-offSetX)  +(1/tDecY)*abs(y-offSetY))  -t)^2);               % mag = ; pwrDec = ; drDec = ; tDecX = ; tDecY = ;offSetX = ;offSetY = ;
wave       (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY)  =  mag*exp(-t/pwrDec)*exp(-(1/drDec)*(sqrt((1/tDecX)*   (x-offSetX)^2+(1/tDecY)*   (y-offSetY)^2)-t)^2);               % mag = ; pwrDec = ; drDec = ; tDecX = ; tDecY = ;offSetX = ;offSetY = ;

%% ~~~~~~~~~~ Create the symbolic equation and plot it ~~~~~~~~~~ %%
finalEqn(x,y,t) = sym(0);

% ----- two dimensional exponential wave in X----- %
mag = maxMag; pwrDec = 1000; drDec = 1000; tDec = 2; offSet = 912/4;
TDW_X01 = twoDimWave(x,t,mag, pwrDec, drDec, tDec, offSet);
mag = maxMag/2; pwrDec = 1000/2; drDec = 1000/2; tDec = 2/2; offSet = 912*3/4;
TDW_X02 = twoDimWave(x,t,mag, pwrDec, drDec, tDec, offSet);

% ----- two dimensional exponential wave in Y----- %
mag = maxMag; pwrDec = 1000; drDec = 1000; tDec = 2; offSet = 1140*3/4;
TDW_Y01 = twoDimWave(y,t,mag, pwrDec, drDec, tDec, offSet);
mag = maxMag/2; pwrDec = 1000/2; drDec = 1000/2; tDec = 2/2; offSet = 1140/4;
TDW_Y02 = twoDimWave(y,t,mag, pwrDec, drDec, tDec, offSet);

% ----- Four hills that move along the X/Y diagonal ----- %
FH_01 = TDW_X01 * TDW_Y01;
FH_02 = TDW_X02 * TDW_Y02;

finalEqn = finalEqn + FH_01 + FH_02;

% ----- a diagonal wave front ----- %
tDecX = tDec; tDecY = tDecX*2; offSetX = 0; offSetY = 0; pwrDec = 100;
LN_01 = line(x, y, t, mag, pwrDec, drDec, tDecX, tDecY, offSetX, offSetY);               

finalEqn = finalEqn + LN_01;
 
% ----- 4 wave fronts moving along 4 diagonals in a diamond shape ----- %
%offSetX = 0; offSetY = 1140/2;
%DM_01 = diamond    (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY)

%finalEqn = finalEqn + DM_01;

%----- Wave ----- %
pwrDec = 50; drDec = 1000; tDecX = 2; tDecY = 2; offSetX = 456; offSetY = 570;
WV_01 = wave       (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY);
pwrDec = 200; offSetX = 912/5; offSetY = 1140/5; tDecX = 1; tDecY = 4;
WV_02 = wave       (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY);
pwrDec = 10; offSetX = 912*4/5; offSetY = 1140*4/5; tDecX = 10; tDecY = 10; drDec = 100;
WV_03 = wave       (x, y, t, mag, pwrDec          , drDec         , tDecX, tDecY, offSetX, offSetY);

finalEqn = finalEqn + WV_01+WV_02+WV_03;

%% ~~~~~~~~~~ 3D Figures ~~~~~~~~~~ %%
profile on

show3DMovie = false; %-----------------------------------------------------------------------------------------------------------------------------------------
show2DMovie = true;

% ----- Input Figure -----%
%Create new figure if figIn doesn't exsist yet
if ((show3DMovie || show2DMovie))
    try
        if (~ishghandle(figIn))
            figIn = figure;
        end
    catch
        figIn = figure;
    end
    hold on
    figIn.Name = 'Input Figure';
    setFigure(figIn);
    setAxis(figIn,newColormap, [0 maxMag]);
end

% ----- Get Matrix from Symbolic ----- %
pictures = 60;
vid = zeros(912, 1140, 3);
tempPic = zeros(912, 1140);

steps = 5;
L = size(newColormap,1);
EQN = matlabFunction(finalEqn);
for t0 = 0:1:pictures
%     EQN2 = feval(EQN,x,y,t0);    
    for i = 1:1:912
        for j = 1:1:1140
            tempPic(i,j)=feval(EQN,i,j,t0*steps);
        end
    end
    %Automatically get min and max
    tPs = round(interp1(linspace(min(tempPic(:)),max(tempPic(:)),L),1:L,tempPic));
    rgb = reshape(newColormap(tPs,:),[size(tPs) 3]); % Make RGB image from scaled.
    vid(:,:,:,t0+1)=rgb;
    %vid(:,:,:,t0+1)=mat2rgb(tempPic);
%     if show3DMovie == true
%         fsurf(finalEqn(x,y,t0));
%         drawnow
%         cla
%     end
    if show2DMovie == true
        image(vid(:,:,:,t0+1));
        drawnow;
        %cla
    end
    disp(t0);
end
if show3DMovie == false
    fsurf(finalEqn(x,y,pictures));
else
    fsurf(finalEqn(x,y,1));
end

v = VideoWriter('newFile.avi','Uncompressed AVI');
v.FrameRate = 60


open(v)
writeVideo(v,vid)
close(v)

profile viewer

%% ~~~~~~~~~~ Export Matrix ~~~~~~~~~~ %%


%% ~~~~~~~~~~ Functions ~~~~~~~~~~ %%

function rgb = mat2rgb(pic)
%https://de.mathworks.com/matlabcentral/answers/45348-convert-matrix-to-rgb:

% Say this is the given matrix
% G
cmap = colormap;
% Now make an RGB image that matches display from IMAGESC:
L = size(cmap,1); %legth
% Scale the matrix to the range of the map.
Gs = round(interp1(linspace(min(pic(:)),max(pic(:)),L),1:L,pic));
rgb = reshape(cmap(Gs,:),[size(Gs) 3]); % Make RGB image from scaled.
end

function setFigure(fig)
    set(gca,'NextPlot','replacechildren');
    figure(fig);
    fig.Units = 'normalized';
    fig.OuterPosition(1) = 0;
    fig.OuterPosition(2) = 0 + (40)/1080;
    fig.Units = 'pixels';
    fig.Position(3) = 1140 + 200;
    fig.Position(4) = 1080 - 40 - 8 - 84;
    fig.Units = 'normalized';
end

function setAxis(fig, cmap, scale)
    figure(fig);
    ax = fig.CurrentAxes;
    xlabel('X'); ylabel('Y'); zlabel('Z');
    grid on;
    view([-90 90]);
    set(ax,'Ydir','reverse');
    colormap(fig, cmap);
    caxis(ax, scale);
    fig.CurrentAxes.XAxis.Limits = [0 912];
    fig.CurrentAxes.YAxis.Limits = [0 1139];
    fig.CurrentAxes.ZAxis.Limits = scale;
end
