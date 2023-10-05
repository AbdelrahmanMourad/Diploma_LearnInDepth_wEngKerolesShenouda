#include <stdio.h>
struct TEST1
{
    char m_day;
};
struct TEST2
{
    char m_day;
    short m_day2;
};
struct TEST3
{
    char m_day;
    int m_day2;
};
struct TEST4
{
    char x1;
    short x2;
    int x3;
    double x4;
    // char m_day;
    // double m_day2;
};
struct TEST5
{

    char q1;
    // char q11;
    int q3;
    short q2;
    // short q22;
    int q3;
    // int q33;
    long double q4;
    // char m_day;
    // long double m_day2;
};
void main(void)
{
    printf("Size = %d\n", sizeof(struct TEST1));
    printf("Size = %d\n", sizeof(struct TEST2));
    printf("Size = %d\n", sizeof(struct TEST3));
    printf("Size = %d\n", sizeof(struct TEST4));
    printf("Size = %d\n", sizeof(struct TEST5));
}
