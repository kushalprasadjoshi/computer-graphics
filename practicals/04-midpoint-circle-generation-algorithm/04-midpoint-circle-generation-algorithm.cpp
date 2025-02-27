#include <dos.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void draw_circle(int, int, int);
void symmetry (int, int, int, int);

int main(int argc, char const *argv[])
{
    int xc, yc, R;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    printf("Enter the centre of the circle: \n");
    printf("Xc =  ");
    scanf("%d", &xc);
    printf("Yc =  ");
    scanf("%d", &yc);
    printf("Enter the radius of the circle: ");
    scanf("%d", &R);

    draw_circle(xc, yc, R);

    getch();
    closegraph();
    
    return 0;
}

void draw_circle(int xc, int yc, int rad) {
    int x = 0, y = rad, p = 1- rad;

    symmetry(x, y, xc, yc);

    for (x = 0; x < y; x++)
    {
        if (p < 0)
        {
            p += 2 * x + 3;
        }
        else
        {
            p += 2 *(x - y) + 5;
            y --;
        }
        symmetry(x, y, xc, yc);
        delay(50);
    }
    
}

void symmetry(int x, int y, int xc, int yc) {
    putpixel(xc + x, yc - y, WHITE); // For pixel (x, y)
    delay(50);
    putpixel(xc + y, yc - x, WHITE); // For pixel (y, x)
    delay(50);
    putpixel(xc + y, yc + x, WHITE); // For pixel (y, -x)
    delay(50);
    putpixel(xc + x, yc + y, WHITE); // For pixel (x, -y)
    delay(50);
    putpixel(xc - x, yc + y, WHITE); // For pixel (-x, -y)
    delay(50);
    putpixel(xc - y, yc + x, WHITE); // For pixel (-y, -x)
    delay(50);
    putpixel(xc - y, yc - x, WHITE); // For pixel (-y, x)
    delay(50);
    putpixel(xc - x, yc - y, WHITE); // For pixel (-x, y)
    delay(50);
}