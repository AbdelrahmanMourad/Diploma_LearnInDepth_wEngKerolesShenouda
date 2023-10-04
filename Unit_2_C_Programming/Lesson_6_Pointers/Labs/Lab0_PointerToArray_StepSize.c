#include <stdio.h>

int main()
{
    unsigned char x[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    unsigned int *y;                                 // StepSize = 4
    unsigned short *z = (unsigned short *)x;         // StepSize = 2
    unsigned long long *d = (unsigned long long *)x; // StepSize = 8
    y = (unsigned int *)x;

    // Print {y}.
    printf("y= 0x%x\n", *y);
    y++;
    printf("y= 0x%x\n", *y);
    y++;
    printf("y= 0x%x\n", *y);
    y++;
    printf("y= 0x%x\n", *y);

    // Print {z}.
    printf("z= 0x%x\n", *z);
    z++;
    printf("z= 0x%x\n", *z);
    z++;
    printf("z= 0x%x\n", *z);
    z++;
    printf("z= 0x%x\n", *z);

    // Print{d}.
    printf("d= 0x%llx\n", *d);
    d++;
    printf("d= 0x%llx\n", *d);

    return 0;
}
