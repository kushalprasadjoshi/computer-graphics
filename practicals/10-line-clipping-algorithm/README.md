# Lab 10: Line Clipping Algorithm

## Aim
To implement Cohen Sutherland Line Clipping Algorithm for clipping a line with the starting and ending given points.

---

## Description
It is a line clipping algorithm. The algorithm divides 2D space into 9 parts using the 4 linear boundaries of the window. It uses an divide and conquer strategy. In this algorithm every line end points is assigned of 4 digit binary code called region code or out code that identifies the location of the points relative to the boundary of the clipping rectangle.

We will use the order left, right, bottom, top (LRBT) for 4 bits. Every bit is assigned a position in the clipping window.  
bit(1) = left  
bit(2) = right  
bit(3) = bottom  
bit(4) = top

| 1001 | 1000 | 1010 |
|------|------|------|
| 0001 | (clip window) 0000 | 0010 |
| 0101 | 0100 | 0110 |

---

## Algorithm
1. Read 2 end points of line as P1(x1, y1) and P2(x2, y2).
2. Read 2 corner points of the clipping window (left-top and right-bottom) as (wx1, wy1) and (wx2, wy2).

3. Assign the region codes for two endpoints P1 and P2 using the following steps:
- Initialize code with 0000
- Set bit 1 if x < wx1
- Set bit 2 if x > wx2
- Set bit 3 if y < wy2
- Set bit 4 if y > wy1

4. Check for the visibility of line:
<ol type='a'> 
    <li>If region code for both endpoints are zero then line is completely visible. Draw the line and go to step 9.</li>
    <li>If the region codes for ending points are not zero and logica ANDing of them is also non-zero then line is invisible.</li>
    <li>If it doesn't satisfy 4.a. and 4.b. then line is partially visible.</li>
</ol>

5. Determine the intersecting edge of clipping as follows:
<ol type='a'>
    <li>If region codes for both endpoints are non-zero find intersection points `P1` and `P2` with boundary edges.
    <li> If region code for any one end point is non-zero then find intersectiong point `P1` or `P2`.
</ol>

6. Divide the line segments considering intersection points.
7. Reject the line segment if any end point of line appears outside the boundary.
8. Draw the clipped line segment.
9. Stop.

---

## Program
```c
// Cohen Sutherland Line Clipping Algorithm

#include "stdio.h"
#include "graphics.h"
#include "conio.h"

int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    float xmax, ymax, xmin, ymin, x1, y1, x2, y2, m;
    float start[4], end[4], code[4];

    initgraph(&gd, &gm, NULL);

    printf("\n\tPlease enter the bottom left co-ordinate of the window: ");
    scanf("%f %f", &xmin, &ymin);
    printf("\n\tPlease enter the top right co-ordinate of the window: ");
    scanf("%f %f", &xmax, &ymax);
    printf("\n\tPlease enter the co-ordinates of the starting point of the line: ");
    scanf("%f %f", &x1, &y1);
    printf("\n\tPlease enter the co-ordinates of the ending point of the line: ");
    scanf("%f %f", &x2, &y2);

    for(int i = 0; i < 4; i++)
    {
        start[i] = 0;
        end[i] = 0;
    }

    m = (y2 -y1) / (x2 - x1);
    if (x1 < xmin)
        start[0] = 1;
    if (x1 > xmax)
        start[1] = 1;
    if (y1 > ymin)
        start[2] = 1;
    if (y1 < ymax)
        start[3] = 1;
    if (x2 < xmin)
        end[0] = 1;
    if (x2 > xmax)
        end[1] = 1;
    if (y2 > ymin)
        end[2] = 1;
    if (y2 < ymax)
        end[3] = 1;

    for(int i = 0; i < 4; i++)
    {
        code[i] = start[i] && end[i];
    }

    if (code[0] == 0 && code[1] == 0 && code[2] == 0 && code[3] == 0)
    {
        if (start[0] == 0 && start[1] == 0 && start[2] == 0 && start[3] == 0 && end[0] == 0 && end[1] == 0 && end[2] == 0 && end[3] == 0)
        {
            cleardevice();
            printf("\n\tThe line is completely visible.\n\t\t and not a clipping candidate.");
            rectangle(xmin, ymin, xmax, ymax);
            line(x1, y1, x2, y2);

            getch();
        }
        else
        {
            cleardevice();
            printf("\n\tLine is partially visible.");
            rectangle(xmin, ymin, xmax, ymax);
            line(x1, y1, x2, y2);
            getch();

            if (start[2] == 0 && start[3] == 1)
            {
                x1 = x1 + (ymin - y1) / m;
                y1 = ymin;
            }
            if(end[2] == 0 && end[3] == 1)
            {
                x2 = x2 + (ymin - y2) / m;
                y2 = ymin;
            }
            if(start[2] == 1 && start[3] == 0)
            {
                x1 = x1 + (ymax - y1) / m;
                y1 = ymax;
            }
            if(end[2] == 1 && end[3] == 0)
            {
                x2 = x2 + (ymax - y2) / m;
                y2 = ymax;
            }
            if(start[1] == 0 && start[0] == 1)
            {
                y1 = y1 + m * (xmin - x1);
                x1 = xmin;
            }
            if(end[1] == 0 && end[0] == 1)
            {
                y2 = y2 + m * (xmin - x2);
                x2 = xmin;
            }
            if(start[1] == 1 && start[0] == 0)
            {
                y1 = y1 + m * (xmax - x1);
                x1 = xmax;
            }
            if(end[1] == 1 && end[0] == 0)
            {
                y2 = y2 + m * (xmax - x2);
                x2 = xmax;
            }

            printf("\n\t\tAfter clipping:");
            rectangle(xmin, ymin, xmax, ymax);
            line(x1, y1, x2, y2);

            getch();

        }
    }

    else
    {
        cleardevice();
        printf("\n\tLine is invisible.");
        rectangle(xmin, ymin, xmax, ymax);
        
        getch();
    }

    getch();
    closegraph();

    return 0;
}
```

**Output:**  
![Program Output](/assets/10-line-clipping-algorithm.png)

---