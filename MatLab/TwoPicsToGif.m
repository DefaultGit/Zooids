[one, cmone] = rgb2ind(imread('Pictures\Checkerboard10101010GreenBig.bmp'),256);
[two, cmtwo] = rgb2ind(imread('Pictures\Checkerboard10101010GreenBig2.bmp'),256);

[x y z] = size(one)

gifArray=uint8(zeros(x,y,z,120));

magicnumber = 60
timedelay = 1/(magicnumber);

imwrite(one,cmone,'Pictures\gif.gif','gif','LoopCount',Inf,'DelayTime',timedelay);

for i = 2:magicnumber
    %{
    if i == 1 
        imwrite(imindone,cmone,filename,'gif', 'Loopcount',inf);     
    elseif i<=60
        imwrite(imindone,cmone,filename,'gif','WriteMode','append'); 
    else
        imwrite(imindtwo,cmtwo,filename,'gif','WriteMode','append'); 
    end
      %}
    if i<= magicnumber/2
        imwrite(one,cmone,'Pictures\gif.gif','gif','WriteMode','append','DelayTime',timedelay);
    else
        imwrite(two,cmtwo,'Pictures\gif.gif','gif','WriteMode','append','DelayTime',timedelay); 
    end
end

done = 1
