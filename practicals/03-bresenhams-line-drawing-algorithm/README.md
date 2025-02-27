# Lab 03: Bresenham's Line Drawing Algorithm

## Aim
To implement Bresenham's line drawing algorithm for drawing a line segment between two given points A(x1, y1) and B (x2, y2).

---

## Algorithm
1. Input the two line end points, storing the left end point in (x0, y0).
2. Plot the point (x0, y0).
3. Calculate the constants △x, △y, 2△y and (2△y - 2△x) and get the first value for the decision parameter as: P0 = 2△y - △x

4. At each xk along the line, starting at k = 0, perform the following test. If P<sub>k</sub> < 0, the next point to plot is (x<sub>k</sub> + 1, y<sub>k</sub>) and:  
    P<sub>k+1</sub> = P<sub>k</sub> + 2△y  
Otherwise the next point to plot is (x<sub>k</sub> + 1, y<sub>k</sub> + 1) and:  
    P<sub>k+1</sub> = P<sub>k</sub> + 2△y - 2△x

5. Repeat step 4 (△x - 1) times.

**Note:** The algorithm and derivation above assumes slopes are less than 1. For other slopes we need to adjust algorith slightly.

---

## Program
```c
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main(int argc, char const *argv[])
{
    int x, y, x1, y1, x2, y2, p, dx, dy;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    printf("Enter the x-coordinates of the first point :: ");
    scanf("%d", &x1);
    printf("Enter the y-coordinates of the first point :: ");
    scanf("%d", &y1);
    printf("Enter the x-coordinates of the second point :: ");
    scanf("%d", &x2);
    printf("Enter the y-coordinates of the second point :: ");
    scanf("%d", &y2);

    x = x1;
    y = y1;
    dx = x2 - x1;
    dy = y2 - y1;

    putpixel(x, y, 2);
    p = (2 * dy - dx);

    while (x <= x2)
    {
        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * dy;
        }
        else
        {
            x = x + 1;
            y = y + 1;
            p = p + (2 * dy) - (2 * dx);
        }
        putpixel(x, y, 7);
    }
    getch();
    closegraph();

    return 0;
}
```

**Output:**  
![BLD Algorithm Output](/assets/03-bld-algorithm.png)

---
