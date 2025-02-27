#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void boundary_fill(int x, int y, int fcolor, int bcolor) {
    if(getpixel(x, y) != bcolor && getpixel(x, y) != fcolor) {
        delay(10);
        putpixel(x, y, fcolor);
        boundary_fill(x+1, y, fcolor, bcolor);
        boundary_fill(x-1, y, fcolor, bcolor);
        boundary_fill(x, y + 1, fcolor, bcolor);
        boundary_fill(x, y - 1, fcolor, bcolor);
    }
}

int main(int argc, char const *argv[])
{
    int x, y, fcolor, bcolor;
    int gd, gm = DETECT;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, NULL);

    printf("Enter the seed point (x, y): ");
    scanf("%d%d", &x, &y);
    printf("Enter the boundary color: ");
    scanf("%d", &bcolor);
    printf("Enter the new color: ");
    scanf("%d", &fcolor);

    circle(100, 200, 45);

    boundary_fill(x, y, fcolor, bcolor);

    getch();
    return 0;
}

