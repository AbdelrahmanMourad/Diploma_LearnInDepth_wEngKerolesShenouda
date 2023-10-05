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
    char m_day;
    double m_day2;
};
struct TEST5
{
    char m_day;
    long double m_day2;
};
void main(void)
{
    printf("Size = %d\n", sizeof(struct TEST1));
    printf("Size = %d\n", sizeof(struct TEST2));
    printf("Size = %d\n", sizeof(struct TEST3));
    printf("Size = %d\n", sizeof(struct TEST4));
    printf("Size = %d\n", sizeof(struct TEST5));
}
