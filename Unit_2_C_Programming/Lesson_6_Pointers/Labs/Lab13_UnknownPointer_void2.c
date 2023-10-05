#include <stdio.h>

//  Compare 2 Variables from Same DataType I don't Know yet.
int Compare(void *Value1, void *Value2, int Type)
{
    int Result;
    switch (Type)
    {
    case 1: // Integer.
        if (*(int *)Value1 == *(int *)Value2)
            Result = 0;
        else if (*(int *)Value1 > *(int *)Value2)
            Result = 1;
        else
            Result = -1;
        break;
    case 2: // Double.
        if (*(double *)Value1 == *(double *)Value2)
            Result = 0;
        else if (*(double *)Value1 > *(double *)Value2)
            Result = 1;
        else
            Result = -1;
        break;
    }

    return Result;
}

#define int_t 1
#define double_t 2

int main(int argt, char **argev)
{
    int x1 = 5, x2 = 6, x3 = 5;
    double y1 = 10.3, y2 = 8.3, y3 = 11.9;

    printf("Compare x1 and x2 gives:\t%d\n", Compare(&x1, &x2, int_t));
    printf("Compare x1 and x3 gives:\t%d\n", Compare(&x1, &x3, int_t));

    printf("Compare y1 and y2 gives:\t%d\n", Compare(&y1, &y2, double_t));
    printf("Compare y1 and y3 gives:\t%d\n", Compare(&y1, &y3, double_t));
}