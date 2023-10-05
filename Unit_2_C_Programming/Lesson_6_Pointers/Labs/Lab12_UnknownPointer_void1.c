#include <stdio.h>

void main(void)
{
    int x = 5;
    double y = 10.3;
    void *p;

    // Cast void pointer to R/W in (int*) Step-Size.
    p = &x;
    *(int *)p = 8;
    printf("x= %d\n", *(int*)p);
    // printf("x= %d\n", x);

    // Cast void pointer to R/W in (double*) Step-Size.
    p = &y;
    *(double *)p = 3.3;
    printf("y= %2.1lf\n", *(double*)p);
    // printf("y= %2.1lf\n", y);
}