#include<Windows.h>

#include<direct.h>


    int main()
{
    _chdir("C:\\Program Files (x86)\\VideoLAN\\VLC");
    system("vlc C:\\Users\\studadmin\\Desktop\\test\\grid.png --fullscreen");

    return 0;
}
