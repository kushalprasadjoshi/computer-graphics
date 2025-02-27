# Lab 02: Digital Differential Analyzer Algorithm

## Aim
To implement DDA algorithm for drawing a line segment between two given end points A(x1, y1) and B(x2, y2).

---

## Algorithm
1. Start
2. Declare variables x, y, x1, y1, x2, y2, k, dx, dy, s, xi, yi and also declare gdrive = DETECT, mode.
3. Initialize the graphics mode with the path location in Turbo C3 folder.
4. Input the two line end-points and store the left end points in (x1, y1).
5. Load (x1, y1) into the frame buffer; that is, plot the first point. Put x = x1, y = y1
6. Calculate dx = x2 - x1 and dy = y2 - y1
7. If abs(dx) > abs(dy), do s = abs(dx)
8. Otherwise s = abs(dy)
9. Then xi = dx / s and yi = dy / s
10. Start from k = 0 and contiuning till k > s, the points will be:  
    i.  x = x + xi  
    ii. y = y + yi

11. Plot pixels using `putpixel()` at points (x, y) in specified color.
12. Close graph and stop.

---

## Program
```c
#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    // gd = graphic driver ( detects best graphics driver and assigns it as default, gm = graphics mode.)
    int x1, y1, x2, y2, steps, k;
    float xincr, yincr, x, y, dx, dy;

    printf("Enter x1, y1: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter x2, y2: ");
    scanf("%d%d", &x2, &y2);

    initgraph(&gd, &gm, NULL);

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
    {
        steps = abs(dx);
    }
    else
    {
        steps = abs(dy);
    }

    xincr = dx / steps;
    yincr = dy / steps;

    x = x1;
    y = y1;

    for (int k = 0; k <= steps; k++)
    {
        delay(100); // For seeing the line drawing process slowly.
        x += xincr;
        y += yincr;
        putpixel(round(x), round(y), WHITE);
    }

    outtextxy(200, 20, "DDA"); // For printing text at desired screen location
    outtextxy(x1 - 5, y1 - 5, "(x1, y1)");
    outtextxy(x2 + 5, y2 + 5, "(x2, y2)");

    getch();
    closegraph(); // Close the graph and come back to previous graphic mode

    return 0;
}
```

**Output:**  
![DDA Output](/assets/02-dda-algorithm.png)

---
