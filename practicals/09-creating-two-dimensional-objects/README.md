# Lab 09: Two Dimensional Objects

## Aim
To write a C program for creating simple two dimensional shape of house, car, fish, man using lines, circles, etc.

---

## Description
The following graphics functions are availabe for creating two dimensional shapes in C: `line()`, `circle()`, `ellipse()`, `rectangle()`, `drawploy()`

### Line
Line function is used to draw a line from a point (x1, y1) to point (x2, y2) i.e. (x1, y1) and (x2, y2) are the end points of the line.

**Declaration:** `line(x1, y1, x2, y2);`

**Example:** `line(100, 200, 300, 400);`

### Circle
Circle function is used to draw a circle with centre (x, y) and third parameter specifies the radius of the circle.

**Declaration:** `circle(x, y, r);`

**Example:**
```c
circle(100, 100, 25); // 25 radius of circle
// (100, 100) is centre of circle
```

### Ellipse
Ellipse is used to draw an ellipse `(x, y)` are coordinates of centre of the ellipse, `startangle` is the starting angle and `endangle` is the ending angle, and fifth and sixth parameters specifies the `x` and `y` radius of the ellipse. To draw a complete ellipse `startangle` and `endangle` should be `0` and `360` respectively.

**Declaration:** `ellipse(x, y, startangle, endangle, xradius, yradius);`

**Example:**
```c
ellipse(100, 200, 0, 360, 25, 45);
// (100, 100) is centre of ellipse
// 0 is starting angle
// 360 is ending angle
// 25 is x-axis radius
// 45 is y-axis radius
```

### Rectangle
Rectangle function is used to draw a rectangle. Coordinates of left top and right bottom corner are required to draw a rectangle. `left` specifies the x-coordinate of top left corner, `top` specifies the y-coordinate of top left corner, `right` specifies the coordiantes of right bottom corner, `bottom` specifies the y-coordinate of right bottom corner.

**Declaration:** `rectangle(left, top, right, bottom);`

**Example:** `rectangle(100, 200, 300, 400);`

### Drawpoly
Drawpoly function is used to draw polygons i.e. traingles, rectangle, pentagon, hexagon, etc.

**Declaration:** 
```c
drawpoly(num, points); // num --> no. of vertices
```

**Example:**
```c
// We will draw a traingle using drawpoly()
// Consider for example the array:
int points[] = {320, 150, 420, 300, 250, 300, 320, 150};
// Points array contains coordinates of traingle which are (320, 150), (420, 300) and (250, 300).
// Note that last point (320, 150) in array is same as first.

// Number of vertices are denoted by num.
// For any polygon num is equal to number of vertices + 1. 
// For traingle num = 4.
num = 4;

// Now we can draw the traingle
drawpoly(num, points);
```

---

## Implementation
### 1. Program for Creating a House Shape
```c
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    rectangle(60, 80, 150, 200);
    rectangle(95, 140, 120, 200);
    line(60, 80, 100, 15);
    line(100, 15, 150, 80);
    circle(100, 60, 10);

    getch();
    closegraph();

    return 0;
}
```

**Output:**  
![Program Output](/assets/09-01-house-shape.png)

### 2. Program for Creating a Simple Car Shape
```c
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    cleardevice();

    line(150, 100, 242, 100);
    ellipse(242, 105, 0, 90, 10, 5);
    line(150, 100, 120, 150);
    line(252, 105, 280, 150);
    line(100, 150, 320, 150);
    line(100, 150, 100, 200);
    line(320, 150, 320, 200);
    line(100, 200, 110, 200);
    line(320, 200, 310, 200);
    arc(130, 200, 0, 180, 20);
    arc(290, 200, 0, 180, 20);
    line(270, 200, 150, 200);
    circle(130, 200, 17);
    circle(290, 200, 17);

    getch();
    closegraph();

    return 0;
}
```

**Output:**  
![Program Output](/assets/09-02-car-shape.png)

### 3. Program for Creating a Fish
```c
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    cleardevice();

    ellipse(520, 200, 10, 350, 90, 30);
    circle(450, 193, 3);
    line(430, 200, 450, 200);
    line(597, 185, 630, 170);
    line(597, 215, 630, 227);
    line(630, 170, 630, 227);
    line(597, 200, 630, 200);
    line(597, 192, 630, 187);
    line(597, 207, 630, 213);
    line(500, 190, 540, 150);
    line(530, 190, 540, 150);

    getch();
    closegraph();

    return 0;
}
```

**Output:**  
![Program Output](/assets/09-03-fish.png)

### 4. Program for Creating a Man Object
```c
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    circle(150, 150, 35);
    line(150, 185, 150, 300);
    line(150, 200, 120, 230);
    line(150, 200, 182, 230);
    line(150, 300, 120, 330);
    line(150, 300, 180, 330);

    outtextxy(230, 350, "Hi, this is Computer Graphics");

    getch();
    closegraph();

    return 0;
}
```

**Output:**  
![Program Output](/assets/09-04-man.png)

---
