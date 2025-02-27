#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void disp();

float x, y;
int xc, yc;

int main()
{
    int gd = DETECT, gm;
    int rx, ry;
    float p1, p2;

    initgraph(&gd, &gm, NULL);

    printf("Enter the center point: ");
    scanf("%d%d", &xc, &yc);
    printf("Enter the value for Rx and Ry : ");
    scanf("%d%d", &rx, &ry);

    x = 0;
    y = ry;

    disp();

    p1 = (ry * ry) - (rx * rx * ry) + (rx * rx) / 4;

    while ((2.0 * ry * ry * x) <= (2.0 * rx * rx * y))
    {
        x++;
        if (p1 <= 0)
            p1 = p1 + (2.0 * ry * ry * x) + (ry * ry);
        else
        {
            y--;
            p1 = p1 + (2.0 * ry * ry * x) - (2.0 * rx * rx * y) + (ry * ry);
        }
        disp();
        x = -x;
        disp();
        x = -x;
    }

    x = rx;
    y = 0;
    disp();

    p2 = (rx * rx) + 2.0 * (ry * ry * rx) + (ry * ry) / 4;

    while ((2.0 * ry * ry * x) > (2.0 * rx * rx * y))
    {
        y++;
        if (p2 > 0)
            p2 = p2 + (rx * rx) - (2.0 * rx * rx * y);
        else
        {
            x--;
            p2 = p2 + (2.0 * ry * ry * x) - (2.0 * rx * rx * y) + (x * x);
        }
        disp();
        y = -y;
        disp();
        y = -y;
    }
    getch();
    closegraph();

    return 0;
}

void disp()
{
    delay(50);
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
}