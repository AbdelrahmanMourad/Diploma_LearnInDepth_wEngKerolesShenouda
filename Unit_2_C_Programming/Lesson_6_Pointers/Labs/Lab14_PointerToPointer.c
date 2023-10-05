#include <stdio.h>

void main(void)
{
    int x = 5, y = 9;
    int *Px = &x;    // Pointer.
    int **PPx = &Px; // Pointer To Pointer.

    printf("x= %d\t,y= %d\n", x, y); //  5   9

    **PPx = 7;                       //  x=7
    printf("x= %d\t,y= %d\n", x, y); //  7   9

    *PPx = &y;
    *Px = 11;                        //  y=11
    printf("x= %d\t,y= %d\n", x, y); //  7   11
}