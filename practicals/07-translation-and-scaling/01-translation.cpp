#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, tx, ty, x3, y3, x4, y4;
    initgraph(&gd, &gm, NULL);

    printf("Enter the starting point of line segment: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the ending point of line segment: ");
    scanf("%d%d", &x2, &y2);
    printf("Enter the translation distance tx, ty: ");
    scanf("%d%d", &tx, &ty);

    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2+22, y2+2, "Original line");

    x3 = x1 + tx;
    y3 = y1 + ty;
    x4 = x2 + tx;
    y4 = y2 + ty;

    setcolor(7);
    line(x3, y3, x4, y4);
    outtextxy(x4+2, y4+2, "Line after translation");
    getch();

    return 0;
}