/*
    It is required to calculate the summation weights of 5 Boxes.
    The User should Enter the Boxes weights.
*/

#include <stdio.h>

void main(void)
{
    // {Array x[5], Empty Var Sum, Ptr2Var px} Declaration.
    int x[5];
    int i, sum = 0;
    int *px = x;

    // Using Pointer px, fill the array values from user input.
    for (i = 0; i < (sizeof(x) / sizeof(int)); i++)
        scanf("%d\n", px + i);

    // Using Pointer px, Display the array values to user.
    for (i = 0; i < (sizeof(x) / sizeof(int)); i++)
        printf("%d\n", *px++);

    // return the pointer to point to array first element.
    px = x; // = &x[0]

    // Using Pointer px, Calculate sum of all array elements.
    for (i = 0; i < (sizeof(x) / sizeof(int)); i++, px++)
        sum += *px;

    // Print Sum of Weights.
    printf("Sum=%d\n", sum);
}