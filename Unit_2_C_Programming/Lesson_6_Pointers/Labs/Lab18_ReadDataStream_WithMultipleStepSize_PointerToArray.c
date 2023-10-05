#include <stdio.h>

typedef unsigned char       u8;
typedef unsigned short      u16;
typedef unsigned int        u32;
typedef unsigned long long  u64;

int main()
{
    // Array.
    u8 x[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    // Pointers.
    u32 *y;            // StepSize = 4
    u16 *z = (u16 *)x; // StepSize = 2
    u64 *d = (u64 *)x; // StepSize = 8
    y      = (u32 *)x;

    // Print {y}. // StepSize = 4
    printf("y= 0x%x\n", *y);
    y++;
    printf("y= 0x%x\n", *y);
    y++;
    printf("y= 0x%x\n", *y);
    y++;
    printf("y= 0x%x\n", *y);

    // Print {z}. // StepSize = 2
    printf("z= 0x%x\n", *z);
    z++;
    printf("z= 0x%x\n", *z);
    z++;
    printf("z= 0x%x\n", *z);
    z++;
    printf("z= 0x%x\n", *z);

    // Print{d}. // StepSize = 8
    printf("d= 0x%llx\n", *d);
    d++;
    printf("d= 0x%llx\n", *d);

    return 0;
}
