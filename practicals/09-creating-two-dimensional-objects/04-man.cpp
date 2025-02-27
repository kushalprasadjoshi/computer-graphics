#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    circle(150, 150, 35);
    line(150, 185, 150, 300);
    line(150, 200, 120, 230);
    line(150, 200, 182, 230);
    line(150, 300, 120, 330);
    line(150, 300, 180, 330);

    outtextxy(230, 350, "Hi, this is Computer Graphics");

    getch();
    closegraph();

    return 0;
}