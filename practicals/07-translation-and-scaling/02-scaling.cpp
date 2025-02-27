#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    float x1, y1, x2, y2, sx, sy, x3, y3, x4, y4;
    initgraph(&gd, &gm, NULL);

    printf("Enter the starting point coordinates: ");
    scanf("%f%f", &x1, &y1);
    printf("Enter the ending point coordinates: ");
    scanf("%f%f", &x2, &y2);
    printf("Enter the translation scaling factor sx, sy: ");
    scanf("%f%f", &sx, &sy);

    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2+22, y2+2, "Original line");

    x3 = x1 * sx;
    y3 = y1 * sy;
    x4 = x2 * sx;
    y4 = y2 * sy;

    setcolor(7);
    line(x3 + 50, y3 + 50, x4 + 50, y4 + 50);
    outtextxy(x4+50+2, y4+50+2, "Line after scaling");

    getch();

    return 0;
}