#include <stdio.h>

void main(void)
{
    /* Un-Assigned Pointer, The Program Will Crash in run-time */
    // int *Py;
    // printf("Py, Points to %d\n", *Py);
    // printf("Py, Points to %x\n", Py);

    // NULL Pointer.
    int *Px = NULL;

    if (Px != NULL)
    {
        printf("Px, Points to %d\n", *Px);
        printf("Px, Points to %x\n", Px);
    }
    else
    {
        printf("Px is not initialized.\n");
    }
}