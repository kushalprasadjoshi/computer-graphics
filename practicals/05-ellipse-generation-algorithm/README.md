# Lab 05: Ellipse Generation Algorithm

## Aim
To implement the ellipse generation algorithm for drawing an ellipse of given centre (x, y) and radius r<sub>x</sub> and r<sub>y</sub>.

---

1. Input r<sub>x</sub>, r<sub>y</sub> and ellipse centre (x<sub>c</sub>, y<sub>c</sub>) and obtain the first point on an ellipse centered on the origin as:  
    (x<sub>0</sub>, y<sub>0</sub>) = (0, r<sub>y</sub>)

2. Calculate the initial parameter in region 1 as:  
    P1<sub>0</sub> = r<sub>y</sub><sup>2</sup> - r<sub>x</sub><sup>2</sup>r<sub>y</sub> + $\frac{1}{4}$ r<sub>x</sub><sup>2</sup>

3. At each x<sub>i</sub> position, starting at i = 0, if P1<sub>i</sub> < 0, the next point along the ellipse centered on (0, 0) is (x<sub>i</sub> + 1, y<sub>i</sub>) and:  
    P1<sub>i+1</sub> = P1<sub>i</sub> + 2r<sub>y</sub><sup>2</sup>x<sub>i+1</sub> + r<sub>y</sub><sup>2</sup>  
Otherwise the next point is (x<sub>i</sub> + 1, y<sub>i</sub> - 1) and:  
    P1<sub>i+1</sub> = P1<sub>i</sub> + 2r<sub>y</sub><sup>2</sup>x<sub>i+1</sub> - 2r<sub>x</sub><sup>2</sup>y<sub>i+1</sub> + r<sub>y</sub><sup>2</sup>  
    and continue until 2r<sub>y</sub><sup>2</sup>x >= 2r<sub>x</sub><sup>2</sup>y

4. (x<sub>0</sub>, y<sub>0</sub>) is the last position calculated in region 1. Calculate the initial parameter in region 2 as:  
    P2<sub>0</sub> = r<sub>y</sub><sup>2</sup>(x<sub>0</sub> + $\frac{1}{2}$)<sup>2</sup> + r<sub>x</sub><sup>2</sup>(y<sub>0</sub> - 1)<sup>2</sup> - r<sub>x</sub><sup>2</sup>r<sub>y</sub><sup>2</sup>

5. At each y<sub>i</sub> position, starting at i = 0, if P2<sub>i</sub> > 0, the next point along the ellipse centered on (0, 0) is (x<sub>i</sub>, y<sub>i</sub> - 1) and:  
    P2<sub>i+1</sub> = P2<sub>i</sub> - 2r<sub>x</sub><sup>2</sup>y<sub>i+1</sub> + r<sub>x</sub><sup>2</sup>  
Use the same incremental calculations as in Region 1.  
Continue until y = 0.

6. For both regions determine symmetry points in the other three quadrants.

7. Move each calculated pixel position (x, y) on to the elliptical path centered on (x<sub>c</sub>, y<sub>c</sub>) and plot the coordinate values.  
    x = x + x<sub>c</sub>  
    y = y + y<sub>c</sub>

## Program
```c
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
```

**Output:**  
![Program Output](/assets/05-ellipse-generation-algorithm.png)

---
