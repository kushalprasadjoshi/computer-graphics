# Lab 04: Midpoint Circle Generation Algorithm

## Aim
To implement midpoint circle generation algorithm or Bresenham's line drawing algorithm for drawing a circle of given centre (x, y) and radius r.

---

## Algorithm
1. Input radius r and circle centre (xc, yc), then set the coordinates for the first point on the circumference of a circle centred on the origin as: (x0, y0) = (0, r).
2. Calculate the initial value of decision parameter as: P<sub>0</sub> = (5/4) - r
3. Starting with k = 0 at each position x<sub>k</sub>, perform the following test. If P<sub>k</sub> < 0, the next point along the circle centered on (0, 0) is (x<sub>k</sub> + 1, y<sub>k</sub>) and:  
    P<sub>k+1</sub> = P<sub>k</sub> + 2 x<sub>k+1</sub> + 1  
Otherwise the next point along the circle is: (x<sub>k</sub> + 1, y<sub>k</sub> - 1) and:  
    P<sub>k+1</sub> = P<sub>k</sub> + 2 x<sub>k+1</sub> + 1 - 2 y<sub>k+1</sub>

4. Determine symmetric points on the other seven octants.
5. Move each calculated pixel position (x, y) onto the circular path centered at (xc, yc) to plot the coordinate values.
6. Repeat steps 3 to 5 until x >= y: x = x + xc and y = y + yc

---

## Program
```c
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
```

**Output:**  
![Midpoint Circle Generation Algorithm Output](/assets/04-midpoint-circle-generation-algorithm.png)

---
