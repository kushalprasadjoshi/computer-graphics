# Lab 06: Filling (Coloring) the Pictures

## Aim
1. To implement flood fill algorithm for filling a rectangle with given color.
2. To implement boundary fill algorithm for filling a circle with given color.

---

## Algorithm
### I. 4-Connected approach of flood fill algorithm
1. We can implement flood fill algorithm by using recursion.
2. First all the pixels should be reassigned to common color. Here common color is black.

3. Start with a point inside given object, check the following condition:  
    ```c
    if(getpixel(x, y) == old_col) //--> old color is common color
    ```
4. If the above condition is satisfied, then following four steps are followed in filling the object.
    ```c
    // Recursion 4-way floodfill
    putpixel(x, y, fill_col);
    flood(x+1, y, fill_col, old_col);
    flood(x-1, y, fill_col, old_col);
    flood(x, y+1, fill_col, old_col);
    flood(x, y-1, fill_col, old_col);
    ```

### II. 4-Connected Approach of Boundary Fill Algorithm
1. We can implement boundary fill algorithm by using recursion.
2. Start from an interior point.
3. Check if the current pixel is not already filled and if it is not an edge point.
    ```c
    putpixel(x, y, fcolor);
    flood(x+1, y, fcolor, bcolor);
    flood(x-1, y, fcolor, bcolor);
    flood(x, y+1, fcolor, bcolor);
    flood(x, y-1, fcolor, bcolor);
    ```

---

### Programs
### 4-Connected Approach of Flood Fill Algorithm
```c
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void flood(int, int, int, int);

int main(int argc, char const *argv[])
{
    int gd, gm = DETECT;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, NULL);
    rectangle(50, 50, 100, 100);
    flood(55, 55, 15, 0);

    getch();
    return 0;
}

void flood(int x, int y, int fill_col, int old_col) {
    if(getpixel(x, y) == old_col) {
        delay(10);
        putpixel(x, y, fill_col);
        flood(x+1, y, fill_col, old_col);
        flood(x-1, y, fill_col, old_col);
        flood(x, y + 1, fill_col, old_col);
        flood(x, y - 1, fill_col, old_col);
    }
}
```

**Output:**  
![Program Output](/assets/06-01-four-connected-flood-fill-algorithm.png)

### Four Connected Approach of Boundary Fill Algorithm
```c
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void boundary_fill(int x, int y, int fcolor, int bcolor) {
    if(getpixel(x, y) != bcolor && getpixel(x, y) != fcolor) {
        delay(10);
        putpixel(x, y, fcolor);
        boundary_fill(x+1, y, fcolor, bcolor);
        boundary_fill(x-1, y, fcolor, bcolor);
        boundary_fill(x, y + 1, fcolor, bcolor);
        boundary_fill(x, y - 1, fcolor, bcolor);
    }
}

int main(int argc, char const *argv[])
{
    int x, y, fcolor, bcolor;
    int gd, gm = DETECT;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, NULL);

    printf("Enter the seed point (x, y): ");
    scanf("%d%d", &x, &y);
    printf("Enter the boundary color: ");
    scanf("%d", &bcolor);
    printf("Enter the new color: ");
    scanf("%d", &fcolor);

    circle(100, 200, 45);

    boundary_fill(x, y, fcolor, bcolor);

    getch();
    return 0;
}
```

**Output:**  
![Program Output](/assets/06-02-four-connected-boundary-fill-algorithm.png)

---
