#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    float x1, y1, x2, y2, x3, y3, x4, y4, a, t;
    initgraph(&gd, &gm, NULL);

    printf("Enter the starting point coordinates: ");
    scanf("%f%f", &x1, &y1);
    printf("Enter the ending point coordinates: ");
    scanf("%f%f", &x2, &y2);
    printf("Enter the angle for roataion: ");
    scanf("%f", &a);

    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2+22, y2+2, "Original line");

    t = a * (3.14 / 180);
    x3 = (x1 * cos(t)) - (y1 * sin(t));
    y3 = (x1 * sin(t)) + (y1 * cos(t));
    x4 = (x2 * cos(t)) - (y2 * sin(t));
    y4 = (x2 * sin(t)) + (y2 * cos(t));

    setcolor(7);
    line(x3, y3, x4, y4);
    outtextxy(x4+2, y4+2, "Line after rotaiton");

    getch();

    return 0;
}