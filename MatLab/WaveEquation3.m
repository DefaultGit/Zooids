%% Clear Workspace
close all
clear
clearvars -except figOut figIn figTV

%% ~~~~~~~~~~ Constants ~~~~~~~~~~ %%
bitDiscretization = 8;
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
mag = 2^bitDiscretization - 1; pwrDec = 100; pwrDecX = 100; pwrDecY = 200;
%Slope of the exponential Funktion for a 2D function and for 3D function
%which can also be described as the decay of the wave for a small change in
%the radius [dr] for a given time t)
drDec = 1000; drDecX = 1000; drDecY = 2000;
%Propagation speed
tDec = 2; tDecX = 2; tDecY= 2;
%Relative offset in x and y
offSet = 10; offSetX = 456; offSetY = 570;

% ----- Functions themself ----- %
twoDimWave (x, t)    =  sqrt(mag)*0.5*exp(-t/pwrDec)*(exp(-(1/drDec)*(x-offSet+tDec*t)^2)+exp(-(1/drDec)*(x-offSet-tDec*t)^2));                   %(x, t, mag, pwrDec, drDec, tDec, offSet)
fourHills  (x, y, t) =  twoDimWave(x,t)*twoDimWave(y,t);      %(x, y, t, mag, pwrDecX, pwrDecY, drDecX, drDecY, tDecX, tDecY, offSetX, offSetY)
line       (x, y, t) =  mag*exp(-t/pwrDec)*exp(-(1/drDec)*(    ((1/tDecX)*   (x-offSetX)  +(1/tDecY)*   (y-offSetY))  -t)^2);               %(x, y, t, mag, pwrDec, drDec, tDecX, tDecY, offSetX, offSetY)
diamond    (x, y, t) =  mag*exp(-t/pwrDec)*exp(-(1/drDec)*(    ((1/tDecX)*abs(x-offSetX)  +(1/tDecY)*abs(y-offSetY))  -t)^2);               %(x, y, t, mag, pwrDec, drDec, tDecX, tDecY, offSetX, offSetY)
wave       (x, y, t) =  mag*exp(-t/pwrDec)*exp(-(1/drDec)*(sqrt((1/tDecX)*   (x-offSetX)^2+(1/tDecY)*   (y-offSetY)^2)-t)^2);               %(x, y, t, mag, pwrDec, drDec, tDecX, tDecY, offSetX, offSetY)

%% ~~~~~~~~~~ Create the symbolic equation and plot it ~~~~~~~~~~ %%
finalEqn(x,y,t) = sym(0);

% ----- two dimensional exponential wave in X----- %
%mag = maxMag; pwrDec = 100; drDec = 1000; tDec = 2; offSet = 456;
TDW_X01 = twoDimWave(x,t);
%mag = maxMag/2; pwrDec = 100/2; drDec = 1000/2; tDec = 2/2; offSet = 456/2;
%TDW_X02 = twoDimWave(x,t);

% ----- two dimensional exponential wave in Y----- %
%(mag, pwrDec, drDec, tDec, offSet)
TDW_Y01 = twoDimWave(y,t);

% ----- Four hills that move along the X/Y diagonal ----- %
% offSetX = 456;
% offSetY = 570;
% FH_01 = TDW_X01 * TDW_Y01;
% 
% finalEqn = finalEqn + FH_01;

% ----- a diagonal wave front ----- %
% offSetX = 0;
% offSetY = 0;
% LN_01 = line(x,y,t);
% 
% finalEqn = finalEqn + LN_01;
% 
% % ----- 4 wave fronts moving along 4 diagonals in a diamond shape ----- %
% offSetX = 912;
% offSetY = 1140;
% DM_01 = diamond(x,y,t);
% 
% finalEqn = finalEqn + DM_01;

% ----- Wave ----- %
offSetX = 456;
offSetY = 570;
WV_01 = wave(x,y,t);

finalEqn = finalEqn + WV_01;

% preview = figure;
% fsurf(finalEqn(x,y,0));
% setAxis(preview, hot, [0 maxMag]);

% %% ~~~~~~~~~~ Export Matrix ~~~~~~~~~~ %%
% video = figure;
% vid = zeros(912, 1140);
% EQN = matlabFunction(finalEqn);
% for t0 = 1:1:4
%     for i = 1:1:912
%         for j = 1:1:1140
%             vid(i,j,t0)=feval(EQN,i,j,100*(t0-1))/65025;
%         end
%     end
% end
% imshow(vid(:,:,1))







%% ~~~~~~~~~~ Figures ~~~~~~~~~~ %%
% ----- Input Figure -----%
%Create new figure if figIn doesn't exsist yet
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

for i = 0:5:300
    t0 = i;
    fsurf(finalEqn(x,y,t0));
    drawnow
    cla
    i
end
fsurf(finalEqn(x,y,t0));

%% ~~~~~~~~~~ Functions ~~~~~~~~~~ %%
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
