#include <stdio.h>

// int main(int argt, char **argv)
// {
//     int x = 5, y = 9, z;
//     printf("x at location 0x%x contains %d\r\n", &x, x); // 5
//     printf("y at location 0x%x contains %d\r\n", &y, y); // 9
//     z = x + y;
//     printf("z at location 0x%x contains %d\r\n", &z, z); // 14

//     return 0;
// }

/*******************************************************************/

// int main(int argt, char **argv)
// {
//     int x = 6;
//     int *px;
//     px = &x;
//     printf("&x=0x%x\npx=0x%x\r\n", &x, px);
//     printf("x=%d\n*px=%d\r\n", x, *px);

//     return 0;
// }

/*******************************************************************/
int main(int argt, char **argv)
{
    int x = 5, y = 7;
    int *p = &x;
    printf("x=%d\t,Value pointed by p=%d\r\n", x, *p); // 5 , 5
    *p = 14;
    printf("x=%d\t,Value pointed by p=%d\r\n", x, *p); // 14 , 14
    p = &y;
    printf("x=%d\t,Value pointed by p=%d\r\n", x, *p); // 14 , 7
    *p = 20;
    printf("y=%d\t,Value pointed by p=%d\r\n", y, *p); // 20 , 20
    
    p = 0;      // Warning, mis-matched types.
    // *p = 15;    // WRONG, and the program will crash here.

    return 0;
}

/*******************************************************************/
