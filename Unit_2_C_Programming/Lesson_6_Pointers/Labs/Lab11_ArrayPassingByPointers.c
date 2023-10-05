#include <stdio.h>

void sort(int *Values, int nValues)
{
    int i, j, temp;
    for (i = 0; i < nValues - 1; i++)
    {
        for (j = i; j < nValues; j++)
        {
            if (Values[i] > Values[j])
            { // Swap.
                temp = Values[i];
                Values[i] = Values[j];
                Values[j] = temp;
            }
        }
    }
}

void main(void)
{
    // Declare countrer and array of values.
    int i, Values[5] = {89, 73, 28, 94, 32};
    // print array before sort.
    for (i = 0; i < 5; i++)
    {
        printf("%d \t", Values[i]);
    }
    printf("\n");
    // Sort Array using function sort.
    sort(Values, 5);
    // print array after sort.
    for (i = 0; i < 5; i++)
    {
        printf("%d \t", Values[i]);
    }
    printf("\n");
}