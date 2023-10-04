#include <stdio.h>

int main(int argt, int **argv)
{
    // Pointers With Different Step-Sizes.
    int *px = 0x0;       // Step-Size = 4
    char *py = 0x0;      // Step-Size = 1
    long long *pz = 0x0; // Step-Size = 8

    // Print Their Location Before Increment.
    printf("px=0x%x\t,py=0x%x\tpz=0x%x\n", px, py, pz);

    // Increment Pointers Addresses.
    px++;
    py++;
    pz++;

    // Print Their Location After Increment.
    printf("px=0x%x\t,py=0x%x\tpz=0x%x\n", px, py, pz);
}