#include <stdio.h>

void main()
{
    int x[5] = {1, 2, 3, 4, 5};
    int *p = x; // x[0]=1
    printf("%d\r\n", *p);
    p++;        // x[0+1]=2
    printf("%d\r\n", *p);
    p = x + 3;  // x[0+3]=x[3]=4
    printf("%d\r\n", *p);
    p--;        // x[3-1]=x[2]=3
    printf("%d\r\n", *p);

    // x++;    // WRONG, Array Address is Fixed.
}