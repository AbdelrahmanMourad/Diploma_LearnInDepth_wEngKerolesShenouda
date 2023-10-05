#include <stdio.h>
#include <string.h>

// Function ProtoType.
void Check(char *a, char *b, int (*cmp)(const char *, const char *));

// Driving Code.
int main(int argt, int **argv)
{
    // Declare Two char Arrays for Strings.
    char s1[80], s2[80];

    // Pointer To Function.
    int (*p)(const char *, const char *);

    // Assign Ptr2Func P* to strcmp.
    p = strcmp; // Assign address of strcmp via p*.

    // Tell User To Enter 2 Strings.
    printf("Enter Two Strings.\n");

    // Input String1.
    fflush(stdin);  fflush(stdout);
    gets(s1);

    // Input String2.
    fflush(stdin);  fflush(stdout);
    gets(s2);

    // Check String1{s1} & String2{s2}, using pointer to the function {strcmp}.
    Check(s1, s2, p);

    return 0;
}

// Function Implementation.
void Check(char *a, char *b, int (*cmp)(const char *, const char *))
{                           // Pointer to function takes 2 arrays, return int
    printf("Testing For Quality.\n");

    
    if (!(*cmp)(a, b)/*___CallFunctionByPointer(*cmp)___*/)      // If Function returned 0.
        printf("Equal.\n");
    else                    // If Function returned 1.
        printf("Not Equal.\n");
}