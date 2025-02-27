# Lab 08: Rotation and Reflection

## Aim
To apply the basic 2D transformations such as rotation and reflection, for a given 2D object.

---

## Description
We have to perform 2D translations on 2D objects. The 2D transformations we are performing on this lab are:
1. Rotation
2. Reflection

### 1. Rotation
A rotation repositions all points in an object along a circular path in the plane centered at the pivot point. We rotate an object by an angle θ (theta).

New coordinates after rotation depend on both x and y.  
> x' = x cosθ - y sinθ
y' = x sinθ + y cosθ

Or in matrix form:  
> P' = R.P, R is rotation matrix
> R = $\begin{bmatrix} cosθ & -sinθ \\ sinθ & cosθ \end{bmatrix}$

### Reflection
Reflection is nothing but producing mirror image of an object. Reflection can be done just by rotating the object about given axis of reflection with an angle of 180 degrees.

---

## Program
### Program for rotation
```c
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
```

**Output:**  
![Program Output](/assets/08-01-rotation.png)

### Program for Reflection Along X-axis
```c
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

char IncFlag;

int PolygonPoints[3][2] = {
    {10, 100},
    {110, 100},
    {110, 200}
};

void PolyLine() {
    int iCnt;
    line(0, 240, 640, 240);
    line(320, 0, 320, 480);

    for (iCnt = 0; iCnt < 3; iCnt++)
    {
        line(PolygonPoints[iCnt][0], PolygonPoints[iCnt][1], PolygonPoints[(iCnt + 1) % 3][0], PolygonPoints[(iCnt + 1) % 3][1]);
    }
}

void Reflect() {
    float Angle;
    int iCnt;
    int Tx, Ty;

    for(iCnt = 0; iCnt < 3; iCnt++) {
        PolygonPoints[iCnt][1] = 480 - PolygonPoints[iCnt][1];
    }
}

int main() {
    int gd = DETECT, gm;
    int iCnt;
    initgraph(&gd, &gm, NULL);

    for(iCnt = 0; iCnt < 3; iCnt++) {
        PolygonPoints[iCnt][0] += 320;
        PolygonPoints[iCnt][1] = 240 - PolygonPoints[iCnt][1];
    }

    PolyLine();

    Reflect();
    PolyLine();
    getch();

    return 0;
}
```

**Output:**  
![Program Output](/assets/08-02-reflection-along-x-axis.png)

---
