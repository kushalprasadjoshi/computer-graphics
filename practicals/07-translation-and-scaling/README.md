# Lab 07: Translation and Scaling

## Aim
To apply the basic 2D transformations: translation and scaling for a given 2D objects.

---

## Description
We have to perform 2D transformations on 2D objects. Here, we perform transformations on a line segment.

The 2D transformations are:
1. Translation
2. Scaling
3. Rotation
4. Reflection
5. Shear

### 1. Translation
Translation is defined as moving the object from one position to another position along straight path.

Consider (x, y) are old coordinates of a point. Then the new coordinates of that same point (x', y') can be obtained as follows:  
> x' = x + tx  
y' = y + ty  

We denote translation transformation as P. We express above equation in matrix form as: 
> P' = P + T  

> $\begin{bmatrix} x' \\ y' \end{bmatrix}$ = $\begin{bmatrix} x \\ y \end{bmatrix}$ + $\begin{bmatrix} tx \\ ty \end{bmatrix}$

### 2. Scaling
Scaling refers to changing the size of the object either by increasing or decreasing.

If (x, y) are old coordiantes of object, then new coordinates of object after applying scaling transformation are obtained as: 

> x' = x * S<sub>x</sub>  
y' = y * S<sub>y</sub>  

S<sub>x</sub> and S<sub>y</sub> are scaling factors along x-axis and y-axis, we express the above equation in matrix form as:  

> $\begin{bmatrix} x' \\ y' \end{bmatrix}$ = $\begin{bmatrix} S_x & 0 \\ S_y & 0 \end{bmatrix}$ $\begin{bmatrix} x \\ y \end{bmatrix}$

---

## Program
### Program for translation
```c
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
```

**Output:**  
![Program Output](/assets/07-01-translation.png)

### Program for Scaling
```c
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
```

**Output:**  
![Program Output](/assets/07-02-scaling.png)

---
