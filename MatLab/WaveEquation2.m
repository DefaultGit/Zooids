close all;
clear;

%% Declare Simbolic Variables %%
syms x y t a b c;
syms u(x,t,b,c);

%% Variables
interval = [0 912 0 1140]

%% Declare Factors for different functions %%
ax=2;
ay=2;
cx=1000;
cy=2000;
mag=150;
bx=456;
by=570;
z1=ones(1,912+1).*mag;

%% Declare Fuctions %%
u(x,t,a,b,c)=sqrt(mag)/2*exp(-(1/c)*(x-b+a*t)^2)+sqrt(mag)/2*exp(-(1/c)*(x-b-a*t)^2);
fourHills(x,y,t)=u(x,t,ax,bx,cx)*u(y,t,ay,by,cy);
wave(x,y,t,a,b,c)=mag*exp(-0.01*t)*exp(-(1/c)*(sqrt((x-b)^2+(y-b)^2)-a*t)^2);
line(x,y,t,a,b,c)=sqrt(mag)/2*exp(-(1/c)*((x-b)+(y-b)-a*t)^2);
diamond(x,y,t,a,b,c)=sqrt(mag)/2*exp(-(1/c)*(abs(x-b)+abs(y-b)-a*t)^2);

%% Figure Options
f1 = figure;
fsurf(sym(0),[0 912 0 1140],'MeshDensity',1);
f1.Position = [1200 400 (570+70) (456)];
xlabel('X'); ylabel('Y'); zlabel('z');

%% Axis Options
ax = gca;
view(2);
ax.Units='pixels';
ax.Position=[60  20 570 456];
%ax.OuterPosition=[-100 0 ax.OuterPosition(3) ax.OuterPosition(4)];
%ax.XTick = [0:61.615:912];
%ax.YTick = [0:98.55:1140];
ax.XTick = [0:91.2:912];
ax.YTick = [0:114:1140]
ax.ZTick = [0:(mag/5):mag];
%f1.CurrentAxes.XAxis.Limits = [0 912];
%f1.CurrentAxes.YAxis.Limits = [0 1140];
f1.CurrentAxes.ZAxis.Limits = [-1 mag];
daspect([0.8*6161.4/9855 1 5*0.8*6161.4/9855*mag/1140]);
%daspect([0.8 1  1]);

hold on;
plot3(0:1:912,0:1:912,z1);

axis vis3d;
%ax.DataAspectRatioMode = 'manual';

f2 = figure;

fsurf(fourHills(x,y,0),[0 912 0 1140],'MeshDensity',1);

%X,Y,Z Labels
xlabel('X'); ylabel('Y'); zlabel('z');

ax2 = gca;
view(2);
ax2.Units='pixels';
ax2.Position=[0 0 570 456];
ax2.XTick = [0:91.2:912];
ax2.YTick = [0:114:1140];
f1.CurrentAxes.ZAxis.Limits = [-1 mag];
daspect([1 1 1/mag]);

hold on;
plot3(0:1:912,0:1:912,z1);
axis vis3d;

%%
figure(f1)

fsurf(fourHills(x,y,100),interval,'LineStyle','-','MeshDensity',21);

fsurf(diamond(x,y,100,2,500,1000),'LineStyle','--','MeshDensity',21)

fsurf(line(x,y,100,2,200,1000),'LineStyle',':','MeshDensity',21)

fsurf(wave(x,y,0.000001,2,200,1000),'LineStyle','-.','MeshDensity',21)
fsurf(wave(x,y,100,2,200,1000),'LineStyle','-','MeshDensity',21)
fsurf(wave(x,y,200,2,200,1000),'LineStyle','-','MeshDensity',21)
fsurf(wave(x,y,300,2,200,1000),'LineStyle','-','MeshDensity',21)
fsurf(wave(x,y,400,2,200,1000),'LineStyle','-','MeshDensity',21)

%colormap hsv
%colorbar('southoutside')
colormap default
caxis([0 mag])

%ax.Units='normalized'


%ax.CameraTarget = [456 570 mag/2];
%ax.CameraPosition=[456 570 mag];
%ax.Units='centimeters';
%ax.Position=[0 0 3*5.70 3*4.56];

%fsurf(sym(mag),[0 912 0 1140]);
%f1 = figure;
%fplot(u(x,0,2,10,2));
%f1.Position = [f1.Position(1)-f1.Position(3) f1.Position(2) f1.Position(3) f1.Position(4)]
%f2 = figure;
%fplot(u(x,0.5,2,10,2));
%f3 = figure;
%f3.Position = [f3.Position(1)+f3.Position(3) f3.Position(2) f3.Position(3) f3.Position(4)]
%fplot(u(x,1,2,10,2));