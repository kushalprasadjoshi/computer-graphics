# Lab 01: Basic Structure of C Graphics Program

```c
#include <stdio.h>
#include <graphics.h> // Must be included for all graphic programs
#include <conio.h>
#include <dos.h> // For including delay functions

int main() {
    int gd = DETECT, gm; // gd = detects best available graphic driver, gm = graphics mode
    initgraph(&gd, &gm, NULL);
    // Above 2 steps are must for every graphics program
    // Declaration of any variables must be done before calling initgraph
    // next write code for producing requiring design or drawing object

    line(100, 100, 200, 200);

    getch();

    return 0;
}
```

**Output:**  
![Basic Structure of C Graphic Program](/assets/01-basic-structure-of-graphic-program.png)

---
