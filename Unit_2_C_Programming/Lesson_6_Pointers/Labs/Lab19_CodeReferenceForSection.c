//________________________________________________________________________________
// 1)c function to take an integer number and calculate it's square root?
int squarRoot(int num)
{
    int res = 0;
    if (num == 0 || num == 1)
        return num;
    while (res * res <= num) // if 5th root (res*res*res*res*res<=num)
    {
        res++;
    }
    return res - 1;
}
int main()
{
    printf("square root is %d", squarRoot(11));
    return 0;
}
// //________________________________________________________________________________
// // Another method:
// double SquareRoot(int number)
// {
//     if (number == 0 || number == 1)
//         return number;
//     double temp, sqrt;
//     sqrt = number / 2;
//     temp = 0.0;
//     while (sqrt != temp)
//     {
//         temp = sqrt;
//         sqrt = (number / temp + temp) / 2;
//     }
//     return sqrt;
// }
// int main()
// {
//     int number;
//     printf("Provide the number: \n");
//     scanf("%d", &number);
//     printf("The square root of '%d' is '%lf'", number, SquareRoot(number));
//     return 0;
// }
// //________________________________________________________________________________
// // 2)c function to check prime number?
// enum Boolean
// {
//     false,
//     true
// };
// int prime(int num)
// {
//     int i, flag = 0;
//     for (i = 2; i <= num / 2; i++)
//     {
//         if (num % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//         return true;
//     return false;
// }
// int main()
// {
//     int num;
//     printf("enter your num:");
//     scanf("%d", &num);
//     char ret = prime(num);
//     (ret == true) ? printf("prime") : printf("not prime");
//     return 0;
// }
// //________________________________________________________________________________
// // 3)c function to print all prime numbers between two numbers?
// void prime(int num1, int num2)
// {
//     int i, flag, num;
//     for (num = num1; num <= num2; num++)
//     {
//         flag = 0;
//         for (i = 2; i <= num / 2; i++)
//         {
//             if (num % i == 0)
//             {
//                 flag++;
//                 break;
//             }
//         }
//         if (flag == 0)
//             printf("%d ", num);
//     }
// }
// int main()
// {
//     int num1, num2;
//     printf("enter your num1:");
//     scanf("%d", &num1);
//     printf("enter your num2:");
//     scanf("%d", &num2);
//     prime(num1, num2);
//     return 0;
// }
// //________________________________________________________________________________
// // 4)c function to take a number and get the nearest 10th number?(if num=73 return 70, if num=78 return 80)
// int Neares10th_number(int num)
// {
//     int rem;
//     rem = num % 10;
//     if (rem >= 5)
//         return num + (10 - rem);
//     return num - rem;
// }
// int main()
// {
//     int num;
//     printf("enter your num:");
//     scanf("%d", &num);
//     printf("nearst 10th number is %d", Neares10th_number(num));
//     return 0;
// }
// //________________________________________________________________________________
// // 5)c function to take a number and sum all digits?
// // i)first method:
// int sum_digits(int num)
// {
//     int sum = 0, rem;
//     while (num != 0)
//     {
//         rem = num % 10;
//         sum += rem;
//         num /= 10;
//     }
//     return sum;
// }
// int main()
// {
//     int num;
//     printf("enter your num:");
//     scanf("%d", &num);
//     printf("sum of digits is is %d", sum_digits(num));
//     return 0;
// }
// //________________________________________________________________________________
// // ii)second method:
// unsigned short sum_digits(unsigned short num)
// {
//     static unsigned short new_num = 0;
//     int rem;
//     if (num != 0)
//     {
//         rem = num % 10;
//         new_num += rem;
//         ;
//         sum_digits(num / 10);
//     }
//     else
//         return 0;
//     return new_num;
// }
// int main()
// {
//     unsigned short num;
//     printf("enter your num:");
//     scanf("%hu", &num);
//     printf("sum of digits is is %hu", sum_digits(num));
//     return 0;
// }
// //________________________________________________________________________________
// // 6)c function to revers digits in number?
// unsigned short reverse_digits(unsigned short num)
// {
//     unsigned short new_num = 0, rem;
//     while (num != 0)
//     {
//         rem = num % 10;
//         new_num = 10 * new_num + rem;
//         num /= 10;
//     }
//     return new_num;
// }
// int main()
// {
//     unsigned short num;
//     printf("enter your num:");
//     scanf("%hu", &num);
//     printf("sum of digits is is %hu", reverse_digits(num));
//     return 0;
// }
// //________________________________________________________________________________
// // recursion method :
// unsigned short reverse_digits(unsigned short num)
// {
//     static unsigned short new_num = 0;
//     int rem;
//     if (num != 0)
//     {
//         rem = num % 10;
//         new_num = 10 * new_num + rem;
//         reverse_digits(num / 10);
//     }
//     else
//         return 0;
//     return new_num;
// }
// int main()
// {
//     unsigned short num;
//     printf("enter your num:");
//     scanf("%hu", &num);
//     printf("reverse num is %hu", reverse_digits(num));
//     return 0;
// }
// //________________________________________________________________________________
// // 7)c function to check whether the num base 2 or not?
// // i)first method:
// enum Boolean
// {
//     false,
//     true
// };
// char check_base2(unsigned short num)
// {
//     if (num != 0 && (num & (num - 1)) == 0)
//         return true;
//     return false;
// }
// int main()
// {
//     unsigned short num;
//     printf("enter your num:");
//     scanf("%hu", &num);
//     char ret = check_base2(num);
//     (ret == true) ? printf("%hu is base 2", num) : printf("%hu is not base 2", num);
//     return 0;
// }
// //________________________________________________________________________________
// // ii)second method:
// void check_base2(int num)
// {
//     int i, c = 0;
//     for (i = 0; i < 8; i++)
//     {
//         if (num & (1 << i))
//         {
//             c++;
//         }
//     }
//     if (c == 1)
//         printf("number is base 2");
//     else
//         printf("number is not base 2");
// }
// int main()
// {
//     int num;
//     printf("enter num:");
//     scanf("%d", &num);
//     check_base2(num);
//     return 0;
// }
// //________________________________________________________________________________
// // 8)c function to count number of ones?
// char count_ones(int num)
// {
//     char count = 0;
//     int i;
//     for (i = 0; i < 32; i++)
//     {
//         if (num & (1 << i))
//             count++;
//     }
//     return count;
// }
// int main()
// {
//     int num;
//     printf("enter your num:");
//     scanf("%d", &num);
//     printf("count of ones is %d", count_ones(num));
//     return 0;
// }
// //________________________________________________________________________________
// // 9)c funtion to print the binary representation of a number try not to print zeros on the left?
// char *print_binary(int num, int base)
// {
//     static char buff[32];
//     char *p = &buff[32];
//     *p = '\0';
//     do
//     {
//         p--;
//         *p = "01"[num % base];
//         num = num / base;

//     } while (num != 0);
//     return p;
// }
// int main()
// {
//     int num;
//     printf("enter num:");
//     scanf("%d", &num);
//     char *p = print_binary(num, 2);
//     printf("%s", p);
//     return 0;
// }
// //________________________________________________________________________________
// // 11)c function to sum numbers from 1 to 100(without loop)?

// int sum_Nos(unsigned int n)
// {
//     static int sum = 0;
//     if (n > 0)
//     {
//         sum_Nos(n - 1);
//         sum = sum + n;
//     }
//     return sum;
// }
// int main()
// {
//     int ret = sum_Nos(100);
//     printf("sum=%d", ret);
//     getchar();
//     return 0;
// }
// //________________________________________________________________________________
// // 12) c function to calculate the factorial of num?
// // i)first method:iteration
// int factorial(int n)
// {
//     int prod = 1;
//     ;
//     while (n != 0)
//     {
//         prod *= n;
//         --n;
//     }
//     return prod;
// }
// int main()
// {
//     int num;
//     printf("enter your num:");
//     scanf("%d", &num);
//     printf("factorial=%d", factorial(num));
//     return 0;
// }
// //________________________________________________________________________________
// // ii)second method:recursive
// int factorial(int n)
// {
//     if (n <= 0)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main()
// {
//     int num;
//     printf("enter your num:");
//     scanf("%d", &num);
//     printf("factorial=%d", factorial(num));
//     return 0;
// }
// //________________________________________________________________________________
// // 13) c function to find a number in a sorted array?
// int search_for_num(int *a, int size, int num)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         if (num == a[i])
//             return i;
//     return -1;
// }
// int main()
// {
//     int a[5] = {5, 8, 10, 12, 15}, size, num;
//     size = sizeof(a) / sizeof(*a);
//     printf("enter number to search:");
//     scanf("%d", &num);
//     int ret = search_for_num(a, size, num);
//     ret == -1 ? printf("number not found") : printf("number found at index %d", ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 14)function to return the maximum and minmum number in an array and there index?
// // i)first method:using pointers
// void search_for_num(int *a, int size, int *max, int *min, int *index_of_max, int *index_of_min)
// {
//     *max = a[0];
//     *min = a[0];
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         if (*max <= a[i])
//         {
//             *max = a[i];
//             *index_of_max = i;
//         }
//         if (*min >= a[i])
//         {
//             *min = a[i];
//             *index_of_min = i;
//         }
//     }
// }
// int main()
// {
//     int a[5] = {13, 8, 10, 12, 15}, size, max, min, max_index, min_index;
//     size = sizeof(a) / sizeof(*a);
//     search_for_num(a, size, &max, &min, &max_index, &min_index);
//     printf("max is %d and it's position is %d\nmin is %d and it's position is %d", max, max_index, min, min_index);
//     return 0;
// }
// //________________________________________________________________________________
// // ii)second method:using structure
// struct max_min
// {
//     int max;
//     int min;
//     int max_index;
//     int min_index;
// };
// struct max_min search_for_num(int *a, int size)
// {
//     struct max_min Max_Min;
//     Max_Min.max = a[0];
//     Max_Min.min = a[0];
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         if (Max_Min.max <= a[i])
//         {
//             Max_Min.max = a[i];
//             Max_Min.max_index = i;
//         }
//         if (Max_Min.min >= a[i])
//         {
//             Max_Min.min = a[i];
//             Max_Min.min_index = i;
//         }
//     }
//     return Max_Min;
// }
// int main()
// {
//     int a[5] = {3, 8, 10, 12, 15}, size;
//     size = sizeof(a) / sizeof(*a);
//     struct max_min Max_Min = search_for_num(a, size);
//     printf("max is %d and it's position is %d\nmin is %d and it's position is %d", Max_Min.max, Max_Min.max_index, Max_Min.min, Max_Min.min_index);
//     return 0;
// }
// //________________________________________________________________________________
// // iii)third method:using union(as structrue).

// // 15)c function to take 2 unsigned char and add them and returen the result in unsigned char?
// #include <stdio.h>
// #include <assert.h>
// unsigned char add(unsigned char num2, unsigned char num1)
// {

//     assert(num1 + num2 <= 255); // will print error if num+num2>255
//     return num1 + num2;         // else print sum;
// }
// int main()
// {
//     unsigned char n1 = 200, n2 = 120;
//     unsigned char ret;
//     ret = add(n1, n2);
//     printf("sum=%d", (unsigned char)ret);
//     return 0;
// }
// //________________________________________________________________________________
// // the problem is when the summation is greater than 255
// // , there will be overflow.the solution we store the result in unsigned short
// unsigned short add(unsigned char num2, unsigned char num1)
// {
//     unsigned short sum = num1 + num2;
//     return sum;
// }
// int main()
// {
//     unsigned char n1 = 150, n2 = 200;
//     unsigned short ret;
//     ret = add(n1, n2);
//     printf("sum=%hu", ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 16)c function to take an array and revers its elements?
// // i)first method:using iteration:
// #define MAX 20
// void reverse_array(int *a, int size)
// {
//     int i, b[MAX], c = 0;
//     for (i = 0; i < size; i++)
//     {
//         b[c] = a[size - 1 - i];
//         c++;
//     }
//     for (i = 0; i < size; i++)
//         a[i] = b[i];
// }
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 7}, size, i;
//     size = sizeof(a) / sizeof(*a);
//     reverse_array(a, size);
//     for (i = 0; i < size; i++)
//         printf("%d ", a[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // ii)second method:using stack
// #define MAX 20
// int stack[MAX], top = -1;
// void push(int data)
// {
//     if (top == MAX - 1)
//         printf("stack is full");
//     else
//     {
//         stack[++top] = data;
//     }
// }
// void pop()
// {
//     if (top == -1)
//         printf("stack is empty");
//     else
//     {
//         printf("%d ", stack[top--]);
//     }
// }
// int main()
// {
//     int a[] = {5, 3, 2, 8, 10, 15}, size, i;
//     size = sizeof(a) / sizeof(*a);
//     printf("the reverse array is\n");
//     for (i = 0; i < size; i++)
//         push(a[i]);
//     for (i = 0; i < size; i++)
//         pop();
//     return 0;
// }
// //________________________________________________________________________________
// // 17)c function to take 2 arrays and swap them(2 different size)?
// #define MAX 20
// void swap(int *a, int *b)
// {
//     int i;
//     for (i = 0; i < MAX; i++)
//     {
//         a[i] ^= b[i];
//         b[i] ^= a[i];
//         a[i] ^= b[i];
//     }
// }
// int main()
// {
//     int a[MAX] = {1, 2, 3, 4, 5}, b[MAX] = {10, 20, 30}, s1 = 5, s2 = 3, i;
//     printf("two arrays before swapping is\n");
//     for (i = 0; i < s1; i++)
//         printf("%d ", a[i]);
//     printf("\n");
//     for (i = 0; i < s2; i++)
//         printf("%d ", b[i]);
//     swap(a, b);
//     printf("\ntwo arrays after swapping is\n");
//     for (i = 0; i < s1; i++)
//         printf("%d ", a[i]);
//     printf("\n");
//     for (i = 0; i < s2; i++)
//         printf("%d ", b[i]);

//     return 0;
// }
// //________________________________________________________________________________
// // 18)c function to reverse and swap two arrays?
// void swap_arrays(int *a, int *b, int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         a[i] ^= b[i];
//         b[i] ^= a[i];
//         a[i] ^= b[i];
//     }
// }
// void reverse_array(int *a, int *b, int size)
// {
//     int i, a1[10], a2[10], c = 0;
//     for (i = 0; i < size; i++)
//     {
//         a1[c] = a[size - 1 - i];
//         a2[c] = b[size - 1 - i];
//         c++;
//     }
//     for (i = 0; i < size; i++)
//     {
//         a[i] = a1[i];
//         b[i] = a2[i];
//     }
// }
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5}, b[] = {10, 20, 30, 40, 50}, size, i;
//     size = sizeof(a) / sizeof(*a);
//     swap_arrays(a, b, size);
//     reverse_array(a, b, size);
//     printf("\ntwo arrays after swapping and reversing are\n");
//     for (i = 0; i < size; i++)
//         printf("%d ", a[i]);
//     printf("\n");
//     for (i = 0; i < size; i++)
//         printf("%d ", b[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // 19)write c function to take an array(with unknown size)contain 2 zeros swap the 3 element after the first zero
// // with the 3 element after the second zero?
// void swap2zeros(int *a, int size)
// {
//     int i, p1, temp[3], p2, j = 0;
//     // get the position of twp zeros
//     for (i = 0; i < size; i++)
//     {
//         if (a[i] == 0)
//         {
//             j++;
//             if (j == 2)
//             {
//                 p2 = i;
//             }
//             else
//             {
//                 p1 = i;
//             }
//         }
//     }
//     // store the 3 elements after zero one in temp array
//     for (i = 0; i < 3; i++)
//     {
//         temp[i] = a[p1 + 1 + i];
//     }
//     // overwrite the 3 elements after second zero on 3 elements after first zero
//     for (i = 0; i < 3; i++)
//     {
//         a[p1 + i + 1] = a[p2 + i + 1];
//     }
//     // overwrite the elements in temp array on the 3 elements after second zero
//     for (i = 0; i < 3; i++)
//     {
//         a[p2 + 1 + i] = temp[i];
//     }
// }
// int main()
// {
//     int a[] = {1, 2, 5, 0, 3, 4, 5, 6, 10, 0, 30, 40, 50, 60, 80, 100}, size, i;
//     size = sizeof(a) / sizeof(*a);
//     swap2zeros(a, size);
//     for (i = 0; i < size; i++)
//         printf("%d ", a[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // 20)c function to take an string and return the longest word?
// char *longest_word(char *string1)
// {
//     static char longestword[20];
//     int index, letters, longestnumber = 0, temp = 0, j;

//     for (index = 0; string1[index] != '\0'; index++)
//     {
//         temp = index;

//         for (letters = 0; string1[index] != ' ' && string1[index] != '\0'; index++, letters++)
//             ;

//         j = 0;

//         if (letters >= longestnumber)
//         {
//             while (string1[temp] != ' ')
//             {
//                 longestword[j] = string1[temp];
//                 temp++;
//                 j++;
//             }
//             longestword[j] = '\0';
//             longestnumber = letters;
//         }
//     }
//     return longestword;
// }
// int main()
// {

//     char string1[] = "my name is mohamed ali", *p;
//     p = longest_word(string1);
//     printf("longest word is %s", p);
//     return 0;
// }
// //________________________________________________________________________________
// // 21)c function to reverse words in string?(mohamed gamal->gamal mohamed)
// // method1:using second array
// void reverse_string(char *str, int size)
// {
//     int i, j, k = 0;
//     char ch[50];
//     for (i = size - 1; i >= 0; i--)
//     {
//         if (str[i] == ' ')
//         {
//             for (j = k - 1; j >= 0; j--)
//             {
//                 printf("%c", ch[j]);
//             }
//             printf(" ");
//             k = 0;
//         }
//         else
//         {
//             ch[k] = str[i];
//             k++;
//         }
//     }
//     if (k != 0)
//     {
//         for (j = k - 1; j >= 0; j--)
//         {
//             printf("%c", ch[j]);
//         }
//     }
// }
// int main()
// {
//     char str[50];
//     puts("enter string");
//     fgets(str, 50, stdin);
//     reverse_string(str, strlen(str));
//     return 0;
// }
// //________________________________________________________________________________
// // method2 : without second array :
// void reverse(char *begin, char *end)
// {
//     char temp;
//     while (begin < end)
//     {
//         temp = *begin;
//         *begin++ = *end;
//         *end-- = temp;
//     }
// }
// // Function to reverse words*/
// void reverseWords(char *s)
// {
//     char *word_begin = s;

//     // Word boundary
//     char *temp = s;

//     // Reversing individual words as
//     // explained in the first step
//     while (*temp)
//     {
//         temp++;
//         if (*temp == '\0')
//         {
//             reverse(word_begin, temp - 1);
//         }
//         else if (*temp == ' ')
//         {
//             reverse(word_begin, temp - 1);
//             word_begin = temp + 1;
//         }
//     }

//     // Reverse the entire string
//     reverse(s, temp - 1);
// }

// int main()
// {
//     char s[] = "i like this program very much";
//     char *temp = s;
//     reverseWords(s);
//     printf("%s", s);
//     getchar();
//     return 0;
// }
// //________________________________________________________________________________
// // method three :
// char *reverse_words(char *s, int len)
// {
//     int index = 0, i, startword, endword;
//     static char reverse[50];
//     startword = len - 1;
//     endword = len - 1;
//     while (startword > 0)
//     {
//         if (s[startword] == ' ')
//         {
//             i = startword + 1;
//             while (i <= endword)
//             {
//                 reverse[index] = s[i];
//                 index++;
//                 i++;
//             }
//             reverse[index++] = ' ';
//             endword = startword - 1;
//         }

//         startword--;
//     }
//     for (i = 0; i <= endword; i++)
//     {
//         reverse[index] = s[i];
//         index++;
//     }
//     return reverse;
// }
// int main()
// {
//     char s[50];
//     int len;
//     printf("enter str:");
//     gets(s);
//     len = strlen(s);
//     printf("original string is\n%s", s);
//     char *p = reverse_words(s, len);
//     printf("\nstring after reverse words is\n %s", p);

//     return 0;
// }
// //________________________________________________________________________________
// // 22)c function to search a word in string?
// void reverse_string(char *s1, char *s2, int len)
// {
//     int m = 0, n, times = 0;
//     for (n = 0; s1[n] != '\0'; n++)
//     {
//         if (s1[n] == s2[m])
//         {
//             while (s1[n] == s2[m] && s1[n] != '\0')
//             {
//                 m++;
//                 n++;
//             }
//             if (m == len)
//             {
//                 times++;
//             }
//         }
//         else
//         {
//             while (s1[n] != ' ')
//             {
//                 n++;
//                 if (s1[n] == '\0')
//                     break;
//             }
//         }
//         m = 0;
//     }
//     if (times > 0)
//         printf("%s appears in sentence", s2);
//     else
//         printf("%s doesn't appear in sentence", s2);
// }
// int main()
// {
//     char str[50], word[10];
//     puts("enter string");
//     fgets(str, 50, stdin);
//     puts("enter word");
//     fgets(word, 50, stdin);
//     reverse_string(str, word, strlen(word));
//     return 0;
// }
// //________________________________________________________________________________
// // 23)c function to take an array and returrn the biggest difference between 2 numbers in the array.
// // (the smaller number must come first in the array)
// // {
// //     10, 1, 5, 3, 6, 8, 7, 2
// // } -> return 7 difference between 1, 8 ?
// int big_diff(int *a, int size)
// {
//     int i, small, big, small_index;
//     small = a[0];
//     for (i = 1; i < size; i++)
//     {
//         if (small >= a[i])
//         {
//             small = a[i];
//             small_index = i;
//         }
//     }
//     big = a[small_index + 1];
//     for (i = small_index + 2; i < size; i++)
//     {
//         if (big <= a[i])
//         {
//             big = a[i];
//         }
//     }
//     printf("small=%d\n", small);
//     printf("big=%d\n", big);

//     return big - small;
// }
// int main()
// {
//     int a[] = {10, 1, 5, 3, 6, 8, 7, 2}, size;
//     size = sizeof(a) / sizeof(*a);
//     printf("big diff is %d", big_diff(a, size));
//     return 0;
// }
// //________________________________________________________________________________
// // 24) c function to count the max number of zeros between two ones?
// int zeros_max(unsigned long long num)
// {
//     unsigned int i, j, mask = 0x80000000;
//     unsigned int max_zeros = 0, count_zeros = 0;
//     for (i = 0; i < 32; i++)
//     {
//         if ((num << i) & mask)
//         {
//             for (j = i + 1; j < 32; j++)
//             {
//                 if ((num << j) & mask)
//                 {
//                     if (count_zeros > max_zeros)
//                     {
//                         max_zeros = count_zeros;
//                     }
//                     count_zeros = 0;
//                     break;
//                 }
//                 else
//                 {
//                     count_zeros++;
//                 }
//             }
//         }
//     }
//     return max_zeros;
// }
// int main()
// {
//     printf("max zeros is %d", zeros_max(296384));
//     return 0;
// }
// //________________________________________________________________________________
// // second method :
// int max_zeros(unsigned int num)
// {
//     int max = 0, zeros = 0;
//     unsigned int mask = 1;
//     while (num)
//     {
//         if ((num & mask) == 0)
//             zeros++;
//         else
//         {
//             if (zeros > max)
//             {
//                 max = zeros;
//                 zeros = 0;
//             }
//         }
//         num >>= 1;
//     }
//     return max;
// }
// int main()
// {
//     printf("%d", max_zeros(17));
//     return 0;
// }
// //________________________________________________________________________________
// // 24)c function to count the max number of ones between two zeros?
// char max_ones(char num)
// {
//     char count = 0;
//     while (num != 0)
//     {
//         num = (num & (num << 1));
//         count++;
//     }

//     return count;
// }
// int main()
// {
//     printf("max ones are %d", max_ones(20));
//     return 0;
// }
// //________________________________________________________________________________
// // 25)c function to find the most repeated number in an array of char(size of the array is very large)?
// int myfun(char *a, int size, int *elem)
// {
//     int i, j, count;
//     int most = 0;
//     int temp;

//     for (i = 0; i < size; i++)
//     {
//         temp = a[i];
//         count = 1;
//         for (j = i + 1; j < size; j++)
//         {
//             if (a[j] == temp)
//             {
//                 count++;
//             }
//         }
//         if (most < count)
//         {
//             most = count;
//             *elem = a[i];
//         }
//     }
//     return most;
// }
// int main()
// {
//     char a[200];
//     puts("enter string");
//     fgets(a, 200, stdin);
//     int size, num;
//     size = strlen(a);
//     int ret = myfun(a, size, &num);
//     printf("%c exits %d times", num, ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 26) c function to take 2 arrays and return an array by merging them like this
// // (a1={1,2,3,4,5},a2={ 11, 12, 13, 14, 15} return a3={1,11,2,12,3,13,4,14,5,15})?
// #define MAX_size 100
// int *merge(int *a, int *b, int s1, int s2, int *s3)
// {
//     static int c[MAX_size];
//     int i, j, count = 0;
//     *s3 = s1 + s2;
//     if (*s3 % 2 == 0)
//     {
//         for (i = 0, j = 0; i < *s3; i = i + 2)
//         {
//             c[i] = a[count];
//             c[i + 1] = b[j];
//             count++;
//             j++;
//         }
//     }
//     else
//     {
//         for (i = 0, j = 0; i < *s3; i = i + 2)
//         {
//             c[i + 1] = b[j];
//             if (i == (*s3 - 1))
//             {
//                 c[i] = b[j];
//                 break;
//             }
//             c[i] = a[count];
//             count++;
//             j++;
//         }
//     }
//     return c;
// }
// int main()
// {
//     int a1[] = {1, 2, 3, 4, 5}, a2[] = {11, 12, 13, 14, 15}, s1, s2, s3, *p, i;
//     s1 = sizeof(a1) / sizeof(*a1);
//     s2 = sizeof(a2) / sizeof(*a2);
//     p = merge(a1, a2, s1, s2, &s3);
//     for (i = 0; i < s3; i++)
//         printf("%d ", p[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // another solution :
// void my_fun(int *a1, int *a2, int *a3, int size)
// {
//     int i = 0, j = 0, k = 0, c = 0, s = 2 * size;
//     while (i < s)
//     {
//         a3[c] = a1[j];
//         c++;
//         j++;
//         a3[c] = a2[k];
//         c++;
//         k++;
//         i = i + 2;
//     }
// }

// int main()
// {
//     int a1[] = {1, 2, 3, 4, 5}, a2[] = {11, 12, 13, 14, 15}, size, a3[30] = {0}, i;
//     size = sizeof(a2) / sizeof(a1[0]);
//     my_fun(a1, a2, a3, size);
//     for (i = 0; i < 2 * size; i++)
//         printf("%d ", a3[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // 27)c function to reverse bits in a 8 bit number(149->10010101) return 169->10101001?
// void display_binary(unsigned char num)
// {
//     char i;
//     for (i = 7; i >= 0; i--)
//     {
//         (num & (1 << i)) ? printf("1") : printf("0");
//     }
// }
// unsigned char reverse_bits(unsigned char num)
// {
//     unsigned char i, temp = 0;
//     for (i = 0; i < 8; i++)
//     {
//         if (num & (1 << i))
//             temp |= 1 << (7 - i);
//     }
//     return temp;
// }
// int main()
// {
//     unsigned char num = 149;
//     printf("num in decimal is %d\n", num);
//     display_binary(num);
//     printf("\nnum in binary is\n");
//     unsigned char ret = reverse_bits(num);
//     printf("\nreverse in decimal is %d\n", ret);
//     printf("\nreverse in decimal is \n");
//     printf("\n");
//     display_binary(ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 28)c function to reverse 4 bits in 8 bits number?
// void display_binary(unsigned char num)
// {
//     char i;
//     for (i = 7; i >= 0; i--)
//     {
//         (num & (1 << i)) ? printf("1") : printf("0");
//     }
// }
// unsigned char reverse_4bits(unsigned char num)
// {
//     return num >> 4 | num << 4;
// }
// int main()
// {
//     unsigned char num = 149;
//     printf("num in decimal is %d\n", num);
//     display_binary(num);
//     printf("\nnum in binary is\n");
//     unsigned char ret = reverse_4bits(num);
//     printf("\nreverse in decimal is %d\n", ret);
//     printf("\nreverse in decimal is \n");
//     printf("\n");
//     display_binary(ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 29) c function to delete repeated element in an array?
// void delete_repeted_element(int *a, int size)
// {
//     int b[10], i, j, count = 0;
//     for (i = 0; i < size; i++)
//     {
//         for (j = 0; j < count; j++)
//         {
//             if (a[i] == b[j])
//                 break;
//         }
//         if (j == count)
//         {
//             b[count] = a[i];
//             count++;
//         }
//     }
//     printf("the array after deleting element is\n");
//     for (i = 0; i < count; i++)
//         printf("%d ", b[i]);
// }
// int main()
// {
//     int a[] = {4, 7, 5, 7, 8, 4, 9}, size;
//     size = sizeof(a) / sizeof(*a);
//     delete_repeted_element(a, size);
//     return 0;
// }
// //________________________________________________________________________________
// // 30)c function to reverse string(mohamed->demahom)?
// // method1:using iterartion:
// void reverse_string(char *str, int len)
// {
//     int i;
//     char s[20];
//     for (i = 0; i < len; i++)
//     {
//         s[i] = str[len - 1 - i];
//     }
//     for (i = 0; i < len; i++)
//     {
//         str[i] = s[i];
//     }
// }
// int main()
// {
//     char str[20];
//     puts("enter string");
//     fgets(str, 20, stdin);
//     reverse_string(str, strlen(str));
//     printf("str after reversing is %s", str);
//     return 0;
// }
// //________________________________________________________________________________
// // method2 : using stack data structure :
// #define MAX_size 20
// int top = -1;
// char stack[MAX_size];
// void push(char data)
// {
//     if (top >= MAX_size - 1)
//         printf("stack is full");
//     else
//         stack[++top] = data;
// }
// void pop()
// {
//     if (top == -1)
//         printf("stack is empty");
//     else
//         printf("%c", stack[top--]);
// }
// int main()
// {
//     char str[20];
//     int i;
//     puts("enter string");
//     fgets(str, 20, stdin);
//     printf("the reverse string is:");
//     for (i = 0; i < strlen(str); i++)
//         push(str[i]);
//     for (i = 0; i < strlen(str); i++)
//         pop();

//     return 0;
// }
// //________________________________________________________________________________
// // 31)c function to sort array using funtion pointer?
// void swap(int *a, int *b)
// {
//     *a ^= *b;
//     *b ^= *a;
//     *a ^= *b;
// }
// int compare(int a, int b)
// {
//     if (a > b)
//         return 1;
//     return -1;
// }
// void sort_array(int *a, int size, int (*compare)(int, int))
// {
//     int i, j;
//     for (i = 0; i < size - 1; i++)
//     {
//         for (j = i + 1; j < size; j++)
//         {
//             if (compare(a[i], a[j]) > 0)
//             {
//                 swap(&a[i], &a[j]);
//             }
//         }
//     }
// }
// int main()
// {
//     int a[] = {5, 4, 7, 1, 9, 15, 0}, size, i;
//     size = sizeof(a) / sizeof(*a);
//     sort_array(a, size, compare);
//     for (i = 0; i < size; i++)
//         printf("%d ", a[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // 32) c function to check number even or odd?
// // method1:using bitwise operato:
// char check_even_odd(unsigned char num)
// {
//     if (num & 1)
//         return 1;
//     return 0;
// }
// int main()
// {
//     unsigned char num = 6;
//     printf("%d", check_even_odd(num));
//     return 0;
// }
// //________________________________________________________________________________
// // method2 : using modules operator:
// char check_even_odd(unsigned char num)
// {
//     if (num % 2 != 0)
//         return 1;
//     return 0;
// }
// int main()
// {
//     unsigned char num = 7;
//     printf("%d", check_even_odd(num));
//     return 0;
// }
// //________________________________________________________________________________
// // 33)Given two integers:L and R,find the maximal value of A,B where A and B satisfy the condition L<=A<=B<=R?
// int Max_Xor(int a, int b)
// {
//     int i, j, temp = 0, max_xor = 0;
//     for (i = a; i <= b; i++)
//     {
//         for (j = i; j <= b; j++)
//         {
//             temp = i ^ j;
//             if (temp > max_xor)
//                 max_xor = temp;
//         }
//     }
//     return max_xor;
// }
// int main()
// {
//     int A, B;
//     printf("enter A:");
//     scanf("%d", &A);
//     printf("enter B:");
//     scanf("%d", &B);
//     int ret = Max_Xor(A, B);
//     printf("max xor=%d", ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 34)c function to convert any letter from lowercase to uppercase?
// char convert_lower_to_upper(char letter)
// {
//     return letter - 32;
// }
// int main()
// {
//     char letter = 'b';
//     printf("%c", convert_lower_to_upper(letter));
//     return 0;
// }
// //________________________________________________________________________________
// // 35)C function to sorrt array of string?
// #define MAX_LEN 100
// void selectionSort(char arr[][MAX_LEN], int n)
// {
//     int i, j, min_idx = 0;

//     // One by one move boundary of unsorted subarray
//     char minStr[MAX_LEN];
//     for (i = 0; i < n - 1; i++)
//     {
//         // Find the minimum element in unsorted array
//         min_idx = i;
//         strcpy(minStr, arr[i]);
//         for (j = i + 1; j < n; j++)
//         {
//             // If min is greater than arr[j]
//             if (strcmp(minStr, arr[j]) > 0)
//             {
//                 // Make arr[j] as minStr and update min_idx
//                 strcpy(minStr, arr[j]);
//                 min_idx = j;
//             }
//         }

//         // Swap the found minimum element with the first element
//         if (min_idx != i)
//         {
//             char temp[MAX_LEN];
//             strcpy(temp, arr[i]); // swap item[pos] and item[i]
//             strcpy(arr[i], arr[min_idx]);
//             strcpy(arr[min_idx], temp);
//         }
//     }
// }
// // Driver code
// int main()
// {
//     char arr[][MAX_LEN] = {"wkue", "qoi", "sbv", "fekls"};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int i;

//     printf("Given array is\n");
//     for (i = 0; i < n; i++)
//         printf("%d: %s \n", i, arr[i]);

//     selectionSort(arr, n);

//     printf("\nSorted array is\n");
//     for (i = 0; i < n; i++)
//         printf("%d: %s \n", i, arr[i]);

//     return 0;
// }
// //________________________________________________________________________________
// // 36)c function to sort string(array of char)?
// void Sort_array(char *s, int n)
// {
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (s[i] > s[j])
//             {
//                 s[i] ^= s[j];
//                 s[j] ^= s[i];
//                 s[i] ^= s[j];
//             }
//         }
//     }
//     printf("%s", s);
// }
// // Driver code
// int main()
// {

//     char str[] = "geeksforgeeks";
//     int size = strlen(str);
//     Sort_array(str, size);
//     return 0;
// }
// //________________________________________________________________________________
// // 37)c function to sort words in string?
// int main()
// {
//     int i, j = 0, k, space = 0;
//     char str[100], p[50][100], cmp[50];

//     printf("Enter the string\n");
//     scanf(" %[^\n]s", str);
//     for (i = 0; i < strlen(str); i++)
//     {
//         if ((str[i] == ','))
//         {
//             space++;
//         }
//     }
//     for (i = 0, j = 0, k = 0; j < strlen(str); j++)
//     {
//         if ((str[j] == ',') || (str[j] == 44) || (str[j] == 46))
//         {
//             p[i][k] = '\0';
//             i++;
//             k = 0;
//         }
//         else
//             p[i][k++] = str[j];
//     }
//     for (i = 0; i < space; i++) // loop for sorting
//     {
//         for (j = i + 1; j <= space; j++)
//         {
//             if ((strcmp(p[i], p[j]) > 0))
//             {
//                 strcpy(cmp, p[i]);
//                 strcpy(p[i], p[j]);
//                 strcpy(p[j], cmp);
//             }
//         }
//     }
//     p[i][k] = '\0';
//     printf("After sorting string is \n");
//     for (i = 0; i <= space; i++)
//     {
//         printf("%s,", p[i]);
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 38)c function to return max of two number using ternary operator?
// int max_numbers(int a, int b)
// {
//     int max;
//     max = (a > b) ? a : b;
//     return max;
// }
// int main()
// {
//     int a, b, max;
//     printf("enter two numbers:");
//     scanf("%d %d", &a, &b);
//     max = max_numbers(a, b);
//     printf("max is %d", max);
//     return 0;
// }
// //________________________________________________________________________________
// // 39)c function to return max of three number using ternary operator?
// int max_numbers(int x, int y, int z)
// {
//     int max;
//     max = ((x) > (y)) ? ((x) > (z)) ? x : z : ((y) > (z)) ? y
//                                                           : z; // or     max=(x>y && x>z)?x:(y>z)?y:z;

//     return max;
// }
// int main()
// {
//     int a, b, c, max;
//     printf("enter two numbers:");
//     scanf("%d %d %d", &a, &b, &c);
//     max = max_numbers(a, b, c);
//     printf("max is %d", max);
//     return 0;
// }
// //________________________________________________________________________________
// // 40)c function to check num is even or odd using conditional operator?
// void check_even_odd(int num)
// {
//     (num & 1) ? printf("%d is odd", num) : printf("%d is even", num);

//     // or (num%2!=0)?printf("%d is odd",num):printf("%d is even",num);
// }
// int main()
// {
//     int num;
//     printf("enter num:");
//     scanf("%d", &num);
//     check_even_odd(num);
//     return 0;
// }
// //________________________________________________________________________________
// // 41)c function to check char is an alphabet or not using condtional operator?
// void check_alphabet(char num)
// {
//     ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z')) ? printf("%c is an alphabet", num) : printf("%c is not alphabet", num);
// }
// int main()
// {
//     char num;
//     printf("enter char:");
//     scanf("%c", &num);
//     check_alphabet(num);
//     return 0;
// }
// //________________________________________________________________________________
// // 42)c function to set,clear,toggle specific bit?
// void myfun(int num, int bit_num)
// {
//     set bit->num |= 1 << bit_num;
//     clear bit->num &= ~(1 << bit_num);
//     toggle bit->num ^= 1 << bit_num;
//     Rotate bits right->num = (num >> bit_num) | (num << 8 - bit_num);
//     Rotate bits left->num = (num << bit_num) | (num >> 8 - bit_num);
//     check if bit is set->num & (1 << bit_num);
//     check if bit is clear !(num & (1 << bit_num));
// }
// //________________________________________________________________________________
// // 43)c function to get the highest order set bit of a number?(22->00010110)->highest order set is 4.
// #define bits sizeof(num) * 8
// int highest_set_order(int num)
// {
//     int i, order = -1;
//     for (i = 0; i < bits - 1; i++)
//     {
//         if ((num >> i) & 1)
//         {
//             order = i;
//             break;
//         }
//     }
//     return order;
// }
// int main()
// {
//     int num;
//     printf("enter num:");
//     scanf("%d", &num);
//     int ret = highest_set_order(num);
//     (ret != -1) ? printf("highest set bit in inedex %d", ret) : printf("no set bits");
//     return 0;
// }
// //________________________________________________________________________________
// // 44)c function to get the lowest order set bit of a number?(22->00010110)->highest order set is 1.
// #define bits sizeof(num) * 8
// int lowest_set_order(int num)
// {
//     int i, order = -1;
//     for (i = 0; i < bits - 1; i++)
//     {
//         if ((num >> i) & 1)
//         {
//             order = i;
//             // break;
//         }
//     }
//     return order;
// }
// int main()
// {
//     int num;
//     printf("enter num:");
//     scanf("%d", &num);
//     int ret = lowest_set_order(num);
//     (ret != -1) ? printf("lowest set bit in inedex %d", ret) : printf("no set bits");
//     return 0;
// }
// //________________________________________________________________________________
// // 45)c function to count trailing zeros in binary number?(trailing zeros mean number of zeros elle wara b3d le 7ad mala2y 1)
// // example:16->00010000->trailing zeros=4      15->00001111->trailing zeros=0.
// #define bits sizeof(num) * 8
// int count_trailingzeros(int num)
// {
//     int i, count = 0;
//     for (i = 0; i < bits - 1; i++)
//     {
//         if ((num >> i) & 1)
//         {
//             break;
//         }
//         else
//             count++;
//     }
//     return count;
// }
// int main()
// {
//     int num;
//     printf("enter num:");
//     scanf("%d", &num);
//     int ret = count_trailingzeros(num);
//     printf("number of trailing zeros is %d", ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 46)c function to count number of ones and zeros in binary number?
// #define bits sizeof(num) * 8
// void count_zeros_ones(int num, int *ones, int *zeros)
// {
//     int i;
//     *ones = 0;
//     *zeros = 0;
//     for (i = 0; i < bits - 1; i++)
//     {
//         if ((num >> i) & 1)
//         {
//             ++*ones;
//         }
//         else
//             ++*zeros;
//     }
// }
// int main()
// {
//     int num, ones, zeros;
//     printf("enter num:");
//     scanf("%d", &num);
//     count_zeros_ones(num, &ones, &zeros);
//     printf("number of zeros is %d\nno of ones is %d", zeros, ones);
//     return 0;
// }
// //________________________________________________________________________________
// // 47)c function to rotate number right?
// unsigned rotate_right(unsigned int num, unsigned bit_num)
// {
//     unsigned new_num;
//     new_num = (num >> bit_num) | (num << (bits - bit_num));
//     return new_num;
// }
// int main()
// {
//     unsigned int num, no_of_rotate;
//     printf("enter num:");
//     scanf("%x", &num);
//     printf("enter no of rotate:");
//     scanf("%u", &no_of_rotate);
//     printf("\n");
//     unsigned int new_num = rotate_right(num, no_of_rotate);
//     printf("0x%x\n", new_num);

//     return 0;
// }
// //________________________________________________________________________________
// // 48)c function to rotate number left?
// unsigned rotate_right(unsigned int num, unsigned bit_num)
// {
//     unsigned new_num;
//     new_num = (num << bit_num) | (num >> (bits - bit_num));
//     return new_num;
// }
// int main()
// {
//     unsigned int num, no_of_rotate;
//     printf("enter num:");
//     scanf("%x", &num);
//     printf("enter no of rotate:");
//     scanf("%u", &no_of_rotate);
//     printf("\n");
//     unsigned int new_num = rotate_right(num, no_of_rotate);
//     printf("0x%x\n", new_num);

//     return 0;
// }
// //________________________________________________________________________________
// // 49)c function to convert number from decimal to binary?
// void binary_num(unsigned int num)
// {
//     int i;
//     for (i = 31; i >= 0; i--)
//     {
//         if ((num >> i) & 1)
//             printf("1");
//         else
//             printf("0");
//     }
// }
// //________________________________________________________________________________
// // 50)c function to swap two number using bitwise operator?
// void swaping(int *a, int *b)
// {
//     *a ^= *b;
//     *b ^= *a;
//     *a ^= *b;
// }
// int main()
// {
//     int a, b;
//     printf("enter two number:");
//     scanf("%d %d", &a, &b);
//     swaping(&a, &b);
//     printf("after swapping a=%d\nb=%d", a, b);

//     return 0;
// }
// //________________________________________________________________________________
// // 51)c function to find first and last digit in number?
// int main()
// {
//     int a[10], num, rem, i = 0, sum = 0;
//     printf("enter num:");
//     scanf("%d", &num);
//     while (num != 0)
//     {
//         rem = num % 10;
//         a[i] = rem;
//         num /= 10;
//         i++;
//     }
//     sum = a[i - 1] + a[0];
//     printf("first digit is %d\nlast digit is %d\n", a[i - 1], a[0]);
//     printf("sum=%d", sum);
//     return 0;
// }
// //________________________________________________________________________________
// // another method :
// int main()
// {
//     int num, c = 0, first_digit, last_digit, n;
//     printf("enter num:");
//     scanf("%d", &num);
//     n = num;
//     last_digit = num % 10;
//     while (n != 0)
//     {
//         // rem=num%10;
//         c++;
//         n = n / 10;
//     }
//     first_digit = (int)num / (pow(10, c - 1));
//     printf("first digit is %d\nlast digit is %d\n", first_digit, last_digit);
//     return 0;
// }
// //________________________________________________________________________________
// // 52)c function to reverse first digit and last digit in number(num=1234->4231)?
// int main()
// {
//     int num, first, last, c = 0, swap, n;
//     printf("enter num:");
//     scanf("%d", &num);
//     n = num;
//     last = n % 10;
//     while (n != 0)
//     {
//         c++;
//         n = n / 10;
//     }
//     first = (int)num / pow(10, c - 1);
//     swap = (last * pow(10, c - 1) + first) + (num - (first * pow(10, c - 1) + last));
//     printf("first=%d\nlast=%d\n", first, last);
//     printf("number after swapping is %d", swap);
//     return 0;
// }
// //________________________________________________________________________________
// // 53)c function to check if number is palindrome or not(if num=121 and reverse is 121 also the num is palindrome)?
// int main()
// {
//     int num, new_num = 0, rem, n;
//     printf("enter num:");
//     scanf("%d", &num);
//     n = num;
//     while (n != 0)
//     {
//         rem = n % 10;
//         new_num = 10 * new_num + rem;
//         n = n / 10;
//     }
//     if (num == new_num)
//         printf("number is palindrome");
//     else
//         printf("number is not palindrome");
//     return 0;
// }
// //________________________________________________________________________________
// // 54)c function to count frequency of digits in an integer(num=11234->1 occurs 2,2 occurs 1 and so on)?
// int num, n;
// int i, lastDigit;
// int freq[BASE] = {0};
// printf("Enter any number: ");
// scanf("%d", &num);
// n = num;
// while (n != 0)
// {
//     lastDigit = n % 10;
//     n /= 10;

//     freq[lastDigit] = freq[lastDigit] + 1;
// }
// printf("Frequency of each digit in %d is: \n", num);
// for (i = 0; i < BASE; i++)
// {
//     if (freq[i] != 0)
//         printf("Frequency of %d = %d\n", i, freq[i]);
// }
// return 0;
// }
// //________________________________________________________________________________
// // 55)c function to print number in words?(123->one two three)
// int main()
// {
//     int num, n, revers = 0, digits;
//     printf("Enter any number: ");
//     scanf("%d", &num);
//     n = num;
//     // no of digits-1
//     digits = (int)log10(n);
//     while (n != 0)
//     {
//         revers = 10 * revers + (n % 10);
//         n = n / 10;
//     }
//     // no of zeros
//     digits = digits - ((int)log10(revers));

//     while (revers != 0)
//     {
//         switch (revers % 10)
//         {
//         case 0:
//             printf("Zero ");
//             break;
//         case 1:
//             printf("One ");
//             break;
//         case 2:
//             printf("Two ");
//             break;
//         case 3:
//             printf("Three ");
//             break;
//         case 4:
//             printf("Four ");
//             break;
//         case 5:
//             printf("Five ");
//             break;
//         case 6:
//             printf("Six ");
//             break;
//         case 7:
//             printf("Seven ");
//             break;
//         case 8:
//             printf("Eight ");
//             break;
//         case 9:
//             printf("Nine ");
//             break;
//         }
//         revers = revers / 10;
//     }
//     while (digits)
//     {
//         printf("zero ");
//         digits--;
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 56)c function to get power?
// int main()
// {
//     int base, exponent, prod = 1;
//     printf("enter base and exp:");
//     scanf("%d %d", &base, &exponent);
//     while (exponent != 0)
//     {
//         prod *= base;
//         exponent--;
//     }
//     printf("power is %d", prod);
//     return 0;
// }
// //________________________________________________________________________________
// // 57)c function to get the factors of number(num=6->factors 1 2 3 6)?
// int main()
// {
//     int i, num;
//     printf("enter num:");
//     scanf("%d", &num);
//     printf("the factors of num is\n");
//     for (i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//             printf("%d ", i);
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 58)c function to get HCF(highest common factor)betwee two numbers(n1=20,n2=15 -->HCF=5)?
// int main()
// {
//     int n1, n2, i, GCD, min;
//     printf("enter num1:");
//     scanf("%d", &n1);
//     printf("enter num2:");
//     scanf("%d", &n2);
//     min = (n1 > n2) ? n2 : n1;
//     for (i = 1; i <= min; i++)
//     {
//         if (n2 % i == 0 && n1 % i == 0)
//             GCD = i;
//     }

//     printf("GCD=%d", GCD);
//     return 0;
// }
// //________________________________________________________________________________
// // 59)c function to get sum of prime numbers?
// int main()
// {
//     int num, flag, i, sum = 0;
//     for (num = 1; num <= 10; num++)
//     {
//         flag = 1;
//         for (i = 2; i <= num / 2; i++)
//         {
//             if (num % i == 0)
//             {
//                 flag++;
//                 break;
//             }
//         }
//         if (flag == 1)
//         {
//             sum += num;
//         }
//     }
//     printf("sum=%d", sum);
//     return 0;
// }
// //________________________________________________________________________________
// // 60)c function tp get prime factors of number(num=10->factors->1,2,5,10-?prime=2,5)?
// int main()
// {
//     int num, flag = 0, i, isprime = 0, j;
//     printf("enter num:");
//     scanf("%d", &num);
//     for (i = 2; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             isprime = 1;
//             for (j = 2; j <= i / 2; j++)
//             {
//                 if (i % j == 0)
//                 {
//                     isprime = 0;
//                     break;
//                 }
//             }
//             if (isprime == 1)
//                 printf("%d ", i);
//         }
//     }

//     return 0;
// }
// //________________________________________________________________________________
// // 61)c function to find ones complement of number?
// #define SIZE 8
// int main()
// {
//     char binary[SIZE + 1], onescomp[SIZE + 1];
//     int i;
//     printf("enter binary num:");
//     gets(binary);
//     for (i = 0; i < SIZE; i++)
//     {
//         if (binary[i] == '1')
//         {
//             onescomp[i] = '0';
//         }
//         else if (binary[i] == '0')
//         {
//             onescomp[i] = '1';
//         }
//         else
//         {
//             printf("error");
//             break;
//         }
//     }
//     onescomp[SIZE] = '\0';
//     printf("%s", onescomp);

//     return 0;
// }
// //________________________________________________________________________________
// // 62)c function to find two's complement of number?
// #define SIZE 8
// int main()
// {
//     char binary[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
//     int i, carry = 1;

//     printf("Enter %d bit binary value: ", SIZE);

//     /* Input 8-bit binary string */
//     gets(binary);

//     /* Find ones complement of the binary number */
//     for (i = 0; i < SIZE; i++)
//     {
//         if (binary[i] == '1')
//         {
//             onesComp[i] = '0';
//         }
//         else if (binary[i] == '0')
//         {
//             onesComp[i] = '1';
//         }
//     }
//     onesComp[SIZE] = '\0';

//     /* Add 1 to the ones complement */
//     for (i = SIZE - 1; i >= 0; i--)
//     {
//         if (onesComp[i] == '1' && carry == 1)
//         {
//             twosComp[i] = '0';
//         }
//         else if (onesComp[i] == '0' && carry == 1)
//         {
//             twosComp[i] = '1';
//             carry = 0;
//         }
//         else
//         {
//             twosComp[i] = onesComp[i];
//         }
//     }
//     twosComp[SIZE] = '\0';

//     printf("Original binary = %s\n", binary);
//     printf("Ones complement = %s\n", onesComp);
//     printf("Twos complement = %s\n", twosComp);

//     return 0;
// }
// //________________________________________________________________________________
// // 63)c function to find length of string without usint strlen() function?
// int length_str(char *str)
// {
//     int i, c = 0;
//     for (i = 0; str[i] != '\0'; i++)
//         c++;
//     return c;
// }
// int main()
// {
//     char s[50];
//     printf("enter string:");
//     gets(s);
//     printf("length of tsring is %d", length_str(s));

//     return 0;
// }
// //________________________________________________________________________________
// // 64)c function to  copy string without usint strcpy() function?
// // first method:
// char *copy_string(char *str)
// {
//     static char cpy_str[50];
//     int i;
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         cpy_str[i] = str[i];
//     }
//     cpy_str[i] = '\0';
//     return cpy_str;
// }
// int main()
// {
//     char str[50], *p;
//     printf("enter string:");
//     gets(str);
//     printf("original string is %s\n:", str);
//     p = copy_string(str);
//     printf("copying string is is %s", p);
//     return 0;
// }
// //________________________________________________________________________________
// // second method : using pointer :
// int main()
// {
//     char s1[50], s2[50], *p1, *p2;
//     p1 = s1;
//     p2 = s2;
//     printf("enter string:");
//     gets(s1);
//     while (*(p2++) = *(p1++))
//         ;
//     printf("original string is %s\n:", s1);
//     printf("copying string is %s\n:", s2);

//     return 0;
// }
// //________________________________________________________________________________
// // third method :
// #define SIZE 100
// void strcpy_fun(char *str1, char *str2)
// {
//     while (*str1 != '\0')
//     {
//         *str2 = *str1;
//         str1++;
//         str2++;
//     }
//     *str2 = '\0';
// }
// int main()
// {
//     char str1[SIZE], str2[SIZE];
//     printf("\nEnter first string:");
//     fgets(str1, sizeof(str1), stdin);
//     strcpy_fun(str1, str2);
//     printf("str2=%s", str2);
//     return (0);
// }
// //________________________________________________________________________________
// // 65)c function to concatenate two strings?
// char *concat_str()
// {
//     static char s1[50];
//     char s2[20];
//     int i = 0, j = 0;
//     printf("enter s1:");
//     gets(s1);
//     printf("enter s2:");
//     gets(s2);
//     while (s1[i] != '\0')
//     {
//         i++;
//     }
//     while (s2[j] != '\0')
//     {
//         s1[i] = s2[j];
//         i++;
//         j++;
//     }
//     s1[i] = '\0';
//     return s1;
// }
// int main()
// {
//     char *p = concat_str();
//     printf("s1=%s", p);

//     return 0;
// }
// //________________________________________________________________________________
// // 66)c function to compare two strings?
// // first method:
// int compare(char *str1, char *str2)
// {
//     int i = 0;
//     while (str1[i] == str2[i])
//     {
//         if (str1[i] == '\0' && str2[i] == '\0')
//             break;

//         i++;
//     }
//     return str1[i] - str2[i];
// }

// int main()
// {
//     char str1[50], str2[50];
//     int index;
//     printf("Enter first string: ");
//     gets(str1);
//     printf("Enter second string: ");
//     gets(str2);
//     index = compare(str1, str2);
//     if (index == 0)
//     {
//         printf("equal strings");
//     }
//     else if (index < 0)
//     {
//         printf("First strin smaller than second");
//     }
//     else
//     {
//         printf("First string is greater than second.");
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // second method :
// int compare_str(char *s1, char *s2)
// {
//     int i, index;
//     for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
//     {
//         if (s1[i] == s2[i])
//             index = 0;
//         else if (s1[i] > s2[i])
//         {
//             index = 1;
//             break;
//         }
//         else
//         {
//             index = -1;
//             break;
//         }
//     }
//     return index;
// }
// int main()
// {
//     char s1[30], s2[30];
//     printf("enter s1:");
//     gets(s1);
//     printf("enter s2:");
//     gets(s2);
//     int index = compare_str(s1, s2);
//     if (index == 0)
//         printf("equal strings");
//     else if (index == 1)
//         printf("s1 greater than s2");
//     else
//         printf("s1 is smaller than s2");
//     return 0;
// }
// //________________________________________________________________________________
// // third method :
// #define SIZE 100
// char strcmp_fun(char *str1, char *str2)
// {
//     int i = 0, flg = 0;
//     while (str1[i] == str2[i])
//     {
//         if (str1[i] == '\0' || str2[i] == '\0')
//             break;

//         i++;
//     }
//     if (str1[i] > str2[i])
//         flg = 1;
//     else if (str1[i] < str2[i])
//         flg = -1;
//     else
//         flg = 0;
//     return flg;
// }
// int main()
// {
//     char str1[SIZE], str2[SIZE];
//     printf("\nEnter first string:");
//     fgets(str1, sizeof(str1), stdin);
//     printf("\nEnter second string:");
//     fgets(str2, sizeof(str2), stdin);
//     char ret = strcmp_fun(str1, str2);
//     if (ret == 0)
//         printf("str1 is equal to str2");
//     else if (ret == 1)
//         printf("str1 is larger than to str2");
//     else if (ret == -1)
//         printf("str1 is smaller than to str2");
//     return (0);
// }
// //________________________________________________________________________________
// // 67)c function to convert string from lower to upper?
// void lower_to_upper(char *s1)
// {
//     int i;
//     for (i = 0; s1[i] != '\0'; i++)
//     {
//         if (s1[i] >= 'a' && s1[i] <= 'z') //    if(s1[i]>='A' && s1[i]<='Z')
//             s1[i] = s1[i] - 32;           // from upper to lower->  s1[i]=s1[i]+32;
//     }
// }
// int main()
// {
//     char s1[30];
//     printf("enter s1:");
//     gets(s1);
//     printf("str before converting is %s\n", s1);
//     lower_to_upper(s1);
//     printf("str after converting is %s\n", s1);

//     return 0;
// }
// //________________________________________________________________________________
// // 68)C program to find total number of alphabets, digits or special characters in a string?
// void count_alp_digits_special(char *s1, int *alphabets, int *digits, int *special)
// {
//     int i;
//     *alphabets = 0;
//     *digits = 0;
//     *special = 0;
//     for (i = 0; s1[i] != '\0'; i++)
//     {
//         if ((s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z'))
//             ++*alphabets;
//         else if (s1[i] >= 0 && s1[i] <= 9)
//             ++*digits;
//         else
//             ++*special;
//     }
// }
// int main()
// {
//     char s1[30];
//     int alphabets = 0, digits = 0, special = 0;
//     printf("enter s1:");
//     gets(s1);
//     count_alp_digits_special(s1, &alphabets, &digits, &special);
//     printf("number of alphabets is %d\nno of digits is %d\nno of special is %d", alphabets, digits, special);

//     return 0;
// }
// //________________________________________________________________________________
// // 70)C program to check whether a string is palindrome or not(if str==str_rev->str is palidrome)?
// // first method:
// char *reverse_str(char *str)
// {
//     int i = 0, j = 0, c = 0;
//     static char s[50];
//     // find length
//     while (str[c] != '\0')
//         c++;
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         s[j] = str[c - 1 - i];
//         j++;
//     }
//     s[j] = '\0';
//     return s;
// }
// void check_palindrome(char *str, char *p, int len)
// {
//     int i, c = 0;
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == p[i])
//             c++;
//         else
//             ;
//     }
//     if (c == len)
//         printf("string is palindrome");
//     else
//         printf("string is not plaindrome");
// }
// int main()
// {
//     char str[50], len;
//     printf("Enter any string: ");
//     gets(str);
//     len = strlen(str);
//     printf("original string is %s\n", str);
//     char *p = reverse_str(str);
//     printf("reverse string is %s\n", p);
//     check_palindrome(str, p, len);

//     return 0;
// }
// //________________________________________________________________________________
// // second method :
// void check_palindrome(char *str, int len)
// {
//     int i, c = 0;
//     for (i = 0; i < len / 2; i++)
//     {
//         if (str[i] == str[len - 1 - i])
//             c++;
//         else
//             break;
//     }
//     if (c == len / 2)
//         printf("string is palindrome");
//     else
//         printf("string is not plaindrome");
// }
// int main()
// {
//     char str[50], len;
//     printf("Enter any string: ");
//     gets(str);
//     // find length of string
//     while (str[len] != '\0')
//         len++;

//     check_palindrome(str, len);

//     return 0;
// }
// //________________________________________________________________________________
// // 71)c function to create,traverse,insert_element,delete_element,delete linked list,count nodes in linked list?
// /* Structure of a node */
// struct node
// {
//     int data;          // Data
//     struct node *next; // Address
// } *head;
// void createList(int n);                    // fun to create linked list
// void traverseList();                       // fun to print linked list
// void insert_element(int pos, int element); // fun to insert element at specific position in linked list
// void delete_element(int pos);              // fun to delete element at specific position in linked list
// void delete_linkedlist();                  // fun to count node
// int count_nodes();
// int main()
// {
//     int n, pos1, element, pos2, choice, count;
//     printf("enter number of nodes in the list:");
//     scanf("%d", &n);
//     createList(n);
//     printf("\ndata in the list is\n");
//     traverseList();
//     printf("\nenter element to insert:");
//     scanf("%d", &element);
//     printf("enter position of element\n:");
//     scanf("%d", &pos1);
//     insert_element(pos1, element);
//     printf("\ndata in the list after insert an element is\n");
//     traverseList();
//     printf("enter pos2:");
//     scanf("%d", &pos2);
//     delete_element(pos2);
//     printf("\ndata in the list after deleting an element is\n");
//     traverseList();
//     printf("\nenter an choice to delete linked list\n");
//     scanf("%d", &choice);
//     switch (choice)
//     {
//     case 1:
//         delete_linkedlist();
//         break;
//     default:
//         printf("\nenter 1 to deleter the list\n");
//         break;
//     }
//     traverseList();
//     count = count_nodes();
//     printf("number of nodes is %d", count);
//     return 0;
// }

// void createList(int n)
// {
//     head = (struct node *)malloc(sizeof(struct node));
//     struct node *new_node, *temp;
//     int i, data;
//     if (head == NULL)
//     {
//         printf("unallocated memory");
//         exit(0);
//     }
//     printf("enter data of node 1:");
//     scanf("%d", &data);
//     head->data = data;
//     head->next = NULL;
//     temp = head;
//     for (i = 2; i <= n; i++)
//     {
//         new_node = (struct node *)malloc(sizeof(struct node));
//         if (new_node == NULL)
//         {
//             printf("unalloctaed memeory");
//             break;
//         }
//         temp->next = new_node;
//         temp = temp->next;
//         printf("enter data of node %d:", i);
//         scanf("%d", &data);
//         new_node->data = data;
//         new_node->next = NULL;
//     }
// }
// void insert_element(int pos, int element)
// {
//     struct node *new_node, *temp;
//     new_node = (struct node *)malloc(sizeof(struct node));
//     temp = head;
//     int i;
//     new_node->data = element;
//     if (pos == 1)
//     {
//         new_node->next = head;
//         head = new_node;
//         return;
//     }
//     for (i = 1; i < pos - 1; i++)
//     {
//         temp = temp->next;
//     }
//     new_node->next = temp->next;
//     temp->next = new_node;
// }
// void delete_element(int pos)
// {
//     int i;
//     struct node *temp1 = head;
//     struct node *temp2 = (struct node *)malloc(sizeof(struct node));
//     if (pos == 1)
//     {
//         head = temp1->next;
//         free(temp1);
//         return;
//     }
//     for (i = 1; i < pos - 1; i++)
//     {
//         temp1 = temp1->next;
//     }
//     temp2 = temp1->next;
//     temp1->next = temp2->next;
//     free(temp2);
// }
// void delete_linkedlist()
// {
//     struct node *temp = head;
//     while (head != NULL)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }
// int count_nodes()
// {
//     int count = 0;
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }
// void traverseList()
// {
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
// }
// //________________________________________________________________________________
// // 72)c function to reverse linked list?
// /* Structure of a node */
// struct node
// {
//     int data;          // Data
//     struct node *next; // Address
// } *head;
// void createList(int n); // fun to create linked list
// void traverseList();    // fun to print linked list
// void reverseList();
// int main()
// {
//     int n;
//     printf("enter number of nodes in the list:");
//     scanf("%d", &n);
//     createList(n);
//     printf("\ndata in the list is\n");
//     traverseList();
//     reverseList();
//     printf("\ndata after reverse in the list is\n");
//     traverseList();
//     return 0;
// }

// void createList(int n)
// {
//     head = (struct node *)malloc(sizeof(struct node));
//     struct node *new_node, *temp;
//     int i, data;
//     if (head == NULL)
//     {
//         printf("unallocated memory");
//         exit(0);
//     }
//     printf("enter data of node 1:");
//     scanf("%d", &data);
//     head->data = data;
//     head->next = NULL;
//     temp = head;
//     for (i = 2; i <= n; i++)
//     {
//         new_node = (struct node *)malloc(sizeof(struct node));
//         if (new_node == NULL)
//         {
//             printf("unalloctaed memeory");
//             break;
//         }
//         temp->next = new_node;
//         temp = temp->next;
//         printf("enter data of node %d:", i);
//         scanf("%d", &data);
//         new_node->data = data;
//         new_node->next = NULL;
//     }
// }
// void reverseList()
// {
//     struct node *prevnode, *currnode;
//     if (head != NULL)
//     {
//         prevnode = head;
//         currnode = head->next;
//         head = head->next;
//         prevnode->next = NULL;
//         while (head != NULL)
//         {
//             head = head->next;
//             currnode->next = prevnode;
//             prevnode = currnode;
//             currnode = head;
//         }
//         head = prevnode;
//     }
// }

// void traverseList()
// {
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
// }
// //________________________________________________________________________________
// // 73)Implementation of stack using Arrays?
// #define stack_size 100
// int stack[stack_size], top = -1, choice;
// void push(int data)
// {
//     if (top == stack_size - 1)
//         printf("stack is overflow");
//     else
//     {
//         stack[++top] = data;
//     }
// }
// void pop()
// {
//     if (top == -1)
//         printf("stack is underflow");
//     else
//     {
//         printf("the poped element is %d\n", stack[top--]);
//     }
// }
// void display()
// {
//     int i;
//     printf("\nthe elements in the stack is\n");
//     if (top == -1)
//         printf("stack is underflow");
//     else
//     {
//         for (i = top; i >= 0; i--)
//             printf("%d ", stack[i]);
//     }
// }
// int main()
// {

//     while (1)
//     {
//         int data;
//         printf("enter an choice:");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 0:
//             printf("enter data:");
//             scanf("%d", &data);
//             push(data);
//             break;
//         case 1:
//             pop();
//             break;
//         case 2:
//             display();
//             break;
//         case 3:
//             exit(0);
//         default:
//             printf("enter value 0 or 1 or 2");
//         }
//     }

//     return 0;
// }
// //________________________________________________________________________________
// // 74)Implementation of stack using linked list?
// #define stack_size 100
// struct node
// {
//     int data;
//     struct node *next;
// } *top;
// int size = -1, choice;
// void push(int data)
// {
//     if (size == stack_size - 1)
//         printf("stack is overflow\n");
//     struct node *new_node = (struct node *)malloc(sizeof(struct node));
//     new_node->data = data;
//     new_node->next = top;
//     top = new_node;
//     size++;
// }
// void pop()
// {
//     int data;
//     if (size == -1)
//         printf("stack is underflow\n");
//     struct node *new_node = (struct node *)malloc(sizeof(struct node));
//     new_node = top;
//     data = top->data;
//     top = top->next;
//     free(new_node);
//     size--;
//     printf("the poped element is %d\n", data);
// }
// void display()
// {
//     int i;
//     printf("\nthe elements in the stack is\n");
//     if (size == -1)
//         printf("stack is underflow");
//     else
//     {
//         for (i = size; i >= 0; i--)
//         {
//             printf("%d ", top->data);
//             top = top->next;
//         }
//     }
// }
// int main()
// {

//     while (1)
//     {
//         int data;
//         printf("\nenter an choice:");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 0:
//             printf("enter data:");
//             scanf("%d", &data);
//             push(data);
//             break;
//         case 1:
//             pop();
//             break;
//         case 2:
//             display();
//             break;
//         case 3:
//             exit(0);
//         default:
//             printf("enter value 0 or 1 or 2");
//         }
//     }

//     return 0;
// }
// //________________________________________________________________________________
// // 75)Implementation of queue using Arrays?
// #define MAX 5
// int cque[MAX], rear = -1, front = -1, i, element, choice;
// void enqueue()
// {
//     if ((rear == MAX - 1 && front == 0) || (rear == front - 1))
//         printf("queue is full");
//     if (rear == MAX - 1 && front != 0)
//         rear = 0;
//     else
//         rear++;
//     printf("enter data:");
//     scanf("%d", &element);
//     cque[rear] = element;
//     if (front == -1)
//         front = 0;
// }
// void dequeue()
// {
//     if (front == -1)
//         printf("queue is empty");
//     element = cque[front];
//     cque[front] = 0;
//     if (front == rear)
//         front = rear = -1;
//     else
//     {
//         if (front == MAX - 1)
//             front = 0;
//         else
//             front++;
//     }
//     printf("the delete element is %d", element);
// }
// void display()
// {
//     printf("the circular queue is\n");
//     for (i = 0; i < MAX; i++)
//         printf("%d ", cque[i]);
// }
// int main()
// {
//     while (1)
//     {
//         printf("enter a choice:");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             enqueue();
//             break;
//         case 2:
//             dequeue();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             exit(0);
//         }
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 76)c function to change output of printf in main()?
// void fun()
// {
// #define printf(x, y) printf(x, 10);
// }

// int main()
// {
//     int i = 10;
//     fun();
//     i = 20;
//     printf("%d", i);
//     return 0;
// } // output will be 10 forever
// //________________________________________________________________________________
// // 77)c function to assign a value without using conditional and arithmetic operators?
// if x
//     = 0->y = a;
// if x
//     = 2->y = b;
// int assignValue(int a, int b, int x)
// {
//     int y;
//     int arr[2];
//     arr[0] = a;
//     arr[1] = b;
//     y = arr[x];

//     return y;
// }

// int main()
// {
//     int a = 5;
//     int b = 10;
//     int x;
//     printf("enter value of x:");
//     scanf("%d", &x);
//     printf("assigned value to y is %d", assignValue(a, b, x));
//     return 0;
// }
// //________________________________________________________________________________
// // second method :
// int assignValue(int a, int b, int c)
// {
//     return ((1 - c) * a) + (c * b);
// }

// int main()
// {
//     int a = 5, b = 10, c = 0;
//     int x = assignValue(a, b, c);
//     printf("assigned value to y is %d", x);
//     return 0;
// }
// //________________________________________________________________________________
// // 78)using function pointr with/without typedef?(sorting algorithm)
// // with typdef:
// typedef int (*comp)(int, int);
// void swap_elemnts(int *a, int *b)
// {
//     *a ^= *b;
//     *b ^= *a;
//     *a ^= *b;
// }
// int compare(int a, int b)
// {
//     if (a > b)
//         return 1;
//     return -1;
// }
// void sort_fun(int *a, int size, comp c)
// {
//     int i, j;
//     for (i = 0; i < size - 1; i++)
//     {
//         for (j = i + 1; j < size; j++)
//         {
//             if (c(a[i], a[j]) > 0)
//             {
//                 swap_elemnts(&a[i], &a[j]);
//             }
//         }
//     }
// }
// int main()
// {
//     int a[] = {7, 2, 4, 9, 3, 1}, i, size;
//     size = sizeof(a) / sizeof(*a);
//     sort_fun(a, size, compare);
//     for (i = 0; i < size; i++)
//         printf("%d ", a[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // without typdef :
// void swap_elemnts(int *a, int *b)
// {
//     *a ^= *b;
//     *b ^= *a;
//     *a ^= *b;
// }
// int compare(int a, int b)
// {
//     if (a > b)
//         return 1;
//     return -1;
// }
// void sort_fun(int *a, int size, int (*compare)(int, int))
// {
//     int i, j;
//     for (i = 0; i < size - 1; i++)
//     {
//         for (j = i + 1; j < size; j++)
//         {
//             if (compare(a[i], a[j]) > 0)
//             {
//                 swap_elemnts(&a[i], &a[j]);
//             }
//         }
//     }
// }
// int main()
// {
//     int a[] = {7, 2, 4, 9, 3, 1}, i, size;
//     size = sizeof(a) / sizeof(*a);
//     sort_fun(a, size, compare);
//     for (i = 0; i < size; i++)
//         printf("%d ", a[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // 79)example of using pointer with array of structure?
// struct point
// {
//     int x;
//     int y;
// };
// int main()
// {
//     int i;
//     struct point p[2];
//     struct point *ptr = p;
//     for (i = 0; i <= 1; i++)
//     {
//         printf("enter detail of point%d\n", i);
//         printf("enter value of x:");
//         scanf("%d", &ptr->x);
//         printf("enter value of y:");
//         scanf("%d", &ptr->y);
//         ptr++;
//     }
//     ptr = p; // reset pointer back to the starting address of std array
//     for (i = 0; i <= 1; i++)
//     {
//         printf("%d %d\n", (ptr->x), (ptr->y));
//         ptr++;
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 80)how to use compound literals to pass struc to function?
// struct point
// {
//     int x;
//     int y;
// };
// void myfun(struct point p1)
// {
//     printf("%d %d", p1.x, p1.y);
// }
// int main()
// {
//     struct point p = {4, 5}; // myfun((struct point){4,5});
//     myfun(p);
//     return 0;
// }

// 81)what is the output?
// int main()
// {
//     char *str1 = "abcd";
//     char str2[] = "abcd";
//     printf("%d %d %d", sizeof(str1),
//            sizeof(str2), sizeof("abcd"));
//     return 0;
// }
// // 4 5 5
// //________________________________________________________________________________
// // 82)how to accsess two dimentional array with pointer(three different ways)?
// // first way:
// int main()
// {
//     int a[2][2] = {{1, 2}, {3, 4}};
//     int *p = &a[0][0];
//     int i, j;
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//             printf("%d ", *(p + i * 2 + j));
//     }
//     return 0;
// }
// // second way :
// int main()
// {
//     int a[2][2] = {{1, 2}, {3, 4}};
//     int(*p)[2] = a; // pointer to array of 2 integers
//     int i, j;
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//             printf("%d ", p[i][j]);
//     }
//     return 0;
// }
// // third way :
// int main()
// {
//     int a[2][2] = {{1, 2}, {3, 4}};
//     int(*p)[2][2] = &a; // pointer to the whole array
//     int i, j;
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//             printf("%d ", (*p)[i][j]);
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 81)how to allocate block of memory for 2D array?
// // a)first method:Using a single pointer:
// #define r 3
// #define c 4
// int main()
// {
//     int *arr = (int *)malloc(r * c * sizeof(int));

//     int i, j, count = 0;
//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             *(arr + i * c + j) = ++count;

//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             printf("%d ", *(arr + i * c + j));

//     return 0;
// }
// //________________________________________________________________________________
// // b)second method:Using an array of pointers;
// #define r 3
// #define c 4
// int main()
// {
//     int i, j, count = 0;

//     int *arr[r];
//     for (i = 0; i < r; i++)
//         arr[i] = (int *)malloc(c * sizeof(int));
//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             arr[i][j] = ++count;

//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             printf("%d ", arr[i][j]);

//     return 0;
// }
// //________________________________________________________________________________
// // c)third method:Using pointer to a pointer:
// #define r 3
// #define c 4
// int main()
// {
//     int i, j, count = 0;

//     int **arr = (int **)malloc(r * sizeof(int *));
//     for (i = 0; i < r; i++)
//         arr[i] = (int *)malloc(c * sizeof(int));

//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             arr[i][j] = ++count;

//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             printf("%d ", arr[i][j]);

//     return 0;
// }
// //________________________________________________________________________________
// // d)fourt method:Using double pointer and one malloc call:
// #define r 3
// #define c 4
// int main()
// {
//     int len = 0;
//     int *ptr, **arr;
//     int count = 0, i, j;

//     len = sizeof(int *) * r + sizeof(int) * c * r;
//     arr = (int **)malloc(len);
//     ptr = (int *)(arr + r);

//     for (i = 0; i < r; i++)
//         arr[i] = (ptr + c * i);

//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             arr[i][j] = ++count;

//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             printf("%d ", arr[i][j]);

//     return 0;
// }
// //________________________________________________________________________________
// // 82)c function to count number of words in string?
// #define SIZE 100
// enum Boolean
// {
//     OUT,
//     IN
// };
// unsigned count_Words(char *str)
// {
//     int state = OUT;
//     unsigned wc = 0;
//     while (*str)
//     {
//         if (*str == ' ' || *str == '\n' || *str == '\t')
//             state = OUT;

//         else if (state == OUT)
//         {
//             state = IN;
//             ++wc;
//         }

//         ++str;
//     }

//     return wc;
// }
// int main(void)
// {
//     char str[SIZE];
//     puts("enter string");
//     fgets(str, 100, stdin);
//     printf("No of words : %u", count_Words(str));
//     return 0;
// }
// //________________________________________________________________________________
// // 83)C function to drwa circle?
// void draw_circle(int radius)
// {
//     int i, j;
//     for (i = 0; i <= 2 * radius; i++)
//     {
//         for (j = 0; j <= 2 * radius; j++)
//         {
//             double distance = sqrt((double)(i - radius) * (i - radius) + (j - radius) * (j - radius));
//             if (distance > radius - 0.5 && distance < radius + 0.5)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int radius;
//     printf("enter radious:");
//     scanf("%d", &radius);
//     draw_circle(radius);
//     return 0;
// }
// //________________________________________________________________________________
// // 84)C Function to convert for little endian to big endian?
// int Convert_Little_To_BigEndian(int num)
// {
//     return (((num & 0x000000ff) << 24) | ((num & 0x0000ff00) << 8) | ((num & 0x00ff0000) >> 8) | ((num & 0xff000000) >> 24));
// }
// int main()
// {
//     int num;
//     printf("enter num:");
//     scanf("%X", &num);
//     int ret = Convert_Little_To_BigEndian(num);
//     printf("0x%X", ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 85)C Function to check the arch is little or big endian?
// int check_little_or_big(int num)
// {
//     char *p = (char *)&num;
//     return *p;
// }
// int main()
// {
//     int num = 1;
//     int ret = check_little_or_big(num);
//     if (ret == 1)
//         printf("little endian");
//     else
//         printf("big endian");
//     return 0;
// }
// //________________________________________________________________________________
// // 86)c function to copy the contents of 2 arrays into a third array in a zigzag order given that array sizes are not known?
// #define MAX 100
// void swap_elements(int *a, int *b)
// {
//     *a ^= *b;
//     *b ^= *a;
//     *a ^= *b;
// }
// void my_fun(int *a, int *b, int s1, int s2)
// {
//     int c[2 * MAX], s3, i, j, count = 0;
//     s3 = s1 + s2;
//     for (i = 0; i < s1; i++)
//     {
//         c[count] = a[i];
//         count++;
//     }
//     for (i = 0; i < s2; i++)
//     {
//         c[count] = b[i];
//         count++;
//     }

//     for (i = 0; i < s3 - 1; i++)
//     {
//         for (j = i + 1; j < s3; j++)
//         {
//             if (c[i] >= c[j])
//             {
//                 swap_elements(&c[i], &c[j]);
//             }
//         }
//     }
//     if (s3 % 2 != 0)
//     {
//         for (i = 1; i < s3; i = i + 2)
//         {
//             swap_elements(&c[i], &c[i + 1]);
//         }
//     }
//     else
//     {
//         for (i = 1; i < s3; i = i + 2)
//         {
//             if (i == 9)
//                 break;
//             else
//                 swap_elements(&c[i], &c[i + 1]);
//         }
//     }
//     printf("\nzigzag array is\n");
//     for (i = 0; i < s3; i++)
//         printf("%d ", c[i]);
// }
// int main()
// {
//     int a[MAX], b[MAX], s1, s2, i;
//     printf("enter s1:");
//     scanf("%d", &s1);
//     printf("enter s2:");
//     scanf("%d", &s2);
//     for (i = 0; i < s1; i++)
//     {
//         printf("a[%d]=", i);
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < s2; i++)
//     {
//         printf("b[%d]=", i);
//         scanf("%d", &b[i]);
//     }
//     my_fun(a, b, s1, s2);

//     return 0;
// }
// //________________________________________________________________________________
// // 87)SEND 10 Bytes with UART by using interrupt?
// #define F_CPU 1000000UL
// #include <avr/io.h>
// #include <avr/interrupt.h>
// #include <util/delay.h>
// #include <stdio.h>
// void uart_init();
// void send_byte(unsigned char data);
// void send_str(char *str);
// char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
// unsigned int i = 0;
// int main(void)
// {
//     uart_init();
//     send_byte(arr[i]);
//     while (1)
//         ;
// }
// void uart_init()
// {
//     UBRRL = 12;
//     // UBRRH= UBRR_VALUE >> 8;
//     UCSRA = 1 << U2X; // double speed
//     UCSRB = (1 << RXEN) | (1 << TXEN) | (1 << TXCIE);
//     enable receiver and transmitter and enable transmitter interrup
//         UCSRC = (1 << UCSZ0) | (1 << UCSZ1) | (1 << URSEL);
//     sei();
// }
// void send_byte(unsigned char data)
// {
//     while (!(UCSRA & (1 << UDRE)))
//         ;
//     UDR = data;
// }
// ISR(USART_TXC_vect)
// {
//     i++;
//     if (i < 10)
//         send_byte(arr[i]);
// }
// //________________________________________________________________________________
// // 88)c function to rotate array (size is N) by D elements(if a[]=1,2,3,4,5
// // and if we put D=2 the array become 3,4,5,1,2 and if we put D=3 the array a=4,5,1,2,3)?
// void rotateArry(int a[], int N, int D)
// {
//     int newArry[n], i;

//     for (i = 0; i < N; i++)
//     {
//         int newIndex = (i + N - D) % N;
//         newArry[newIndex] = a[i];
//     }
//     for (i = 0; i < N; i++)
//     {
//         a[i] = newArry[i];
//     }
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5}, N, D, i;
//     N = sizeof(a) / sizeof(*a);
//     printf("enter no of rotates:");
//     scanf("%d", &D);
//     rotateArry(a, N, D);
//     for (i = 0; i < N; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 89)recursive function for linear search algorithm?
// int recSearch(int arr[], int l, int r, int x)
// {
//     if (r < l)
//         return -1;
//     if (arr[l] == x)
//         return l;
//     if (arr[r] == x)
//         return r;
//     return recSearch(arr, l + 1, r - 1, x);
// }

// int main()
// {
//     int arr[] = {12, 34, 54, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 50;
//     int index = recSearch(arr, 0, n - 1, x);
//     if (index != -1)
//         printf("Element %d is present at index %d", x, index);
//     else
//         printf("Element %d is not present", x);
//     return 0;
// }
// //________________________________________________________________________________
// // 90)c function to multiply two matrices?
// #define N 2
// void multiply(int mat1[][N], int mat2[][N], int res[][N])
// {
//     int i, j, k;
//     for (i = 0; i < N; i++)
//     {
//         for (j = 0; j < N; j++)
//         {
//             res[i][j] = 0;
//             for (k = 0; k < N; k++)
//                 res[i][j] += mat1[i][k] * mat2[k][j];
//         }
//     }
// }
// int main()
// {
//     int a1[2][2] = {{2, 4}, {3, 4}}, a2[2][2] = {{1, 2}, {1, 3}}, a3[2][2], i, j;
//     multiply(a1, a2, a3);
//     printf("Result matrix is \n");
//     for (i = 0; i < N; i++)
//     {
//         for (j = 0; j < N; j++)
//             printf("%d ", a3[i][j]);
//         printf("\n");
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 91) c function to print all uniques elements in array?
// void my_fun(int a[], int size, int *b)
// {
//     int i, j, c;
//     for (i = 0; i < size; i++)
//     {
//         c = 1;
//         for (j = i + 1; j < size; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 b[j] = 0;
//                 c++;
//             }
//         }
//         if (b[i] != 0)
//         {
//             b[i] = c;
//         }
//     }
//     for (i = 0; i < size; i++)
//     {
//         if (b[i] != 0 && b[i] % 2 != 0)
//             printf("unique elements are %d\n", a[i]);
//     }
// }

// /* Driver program to test above function */
// int main()
// {
//     int a[] = {1, 2, 3, 1, 4, 3, 2}, b[] = {-1, -1, -1, -1, -1, -1}, size;
//     size = sizeof(a) / sizeof(*a);
//     my_fun(a, size, b);
//     return 0;
// }
// //________________________________________________________________________________
// // 92)function to find sum of left diagonals of square matrix?
// #define N 3
// int my_fun(int a[][N])
// {
//     int i, j, sum = 0, m = N;
//     for (i = 0; i < N; i++)
//     {
//         m = m - 1;
//         for (j = 0; j < N; j++)
//         {
//             if (j == m)
//                 sum += a[i][j];
//         }
//     }
//     return sum;
// }

// int main()
// {
//     int a[][N] = {{1, 2, 3}, {8, 4, 4}, {10, 4, 9}};
//     int ret = my_fun(a);
//     printf("sum is %d", ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 93)implemetation of strcat in one line?
// void my_strcat(char *dest, char *src)
// {
//     (*dest) ? my_strcat(++dest, src) : (*dest++ = *src++) ? my_strcat(dest, src)
//                                                           : 0;
// }

// /* driver function to test above function */
// int main()
// {
//     char dest[100] = "geeksfor";
//     char *src = "geeks";
//     my_strcat(dest, src);
//     printf(" %s ", dest);
//     getchar();
// }
// //________________________________________________________________________________
// // 94)implemetation of strcopy in one line?
// int my_strcmp(char *a, char *b)
// {
//     return (*a == *b && *b == '\0') ? 0 : (*a == *b) ? my_strcmp(++a, ++b)
//                                                      : 1;
// }

// /* driver function to test above function */
// int main()
// {
//     char *a = "geeksforgeeks";
//     char *b = "geeksforgeeks";
//     if (my_strcmp(a, b) == 0)
//         printf(" String are same ");
//     else
//         printf(" String are not same ");

//     getchar();
//     return 0;
// }
// //________________________________________________________________________________
// // 95)how to convert number to string?
// int main()
// {
//     char result[50];
//     float num = 23.34;
//     sprintf(result, "%f", num);
//     printf("\n The string for the num is %s", result);
//     getchar();
// }
// //________________________________________________________________________________
// // 96)c function to convert floating point to string in c?
// void reverse(char *str, int len)
// {
//     int i = 0, j = len - 1, temp;
//     while (i < j)
//     {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//         i++;
//         j--;
//     }
// }

// int intToStr(int x, char str[], int d)
// {
//     int i = 0;
//     while (x)
//     {
//         str[i++] = (x % 10) + '0';
//         x = x / 10;
//     }

//     while (i < d)
//         str[i++] = '0';

//     reverse(str, i);
//     str[i] = '\0';
//     return i;
// }

// // Converts a floating-point/double number to a string.
// void ftoa(float n, char *res, int afterpoint)
// {
//     // Extract integer part
//     int ipart = (int)n;

//     // Extract floating part
//     float fpart = n - (float)ipart;

//     // convert integer part to string
//     int i = intToStr(ipart, res, 0);

//     // check for display option after point
//     if (afterpoint != 0)
//     {
//         res[i] = '.'; // add dot

//         // Get the value of fraction part upto given no.
//         // of points after dot. The third parameter
//         // is needed to handle cases like 233.007
//         fpart = fpart * pow(10, afterpoint);

//         intToStr((int)fpart, res + i + 1, afterpoint);
//     }
// }

// // Driver program to test above function
// int main()
// {
//     char res[20];
//     float n = 233.007;
//     ftoa(n, res, 3);
//     printf("\"%s\"\n", res);
//     return 0;
// }
// //________________________________________________________________________________
// // 97)c code to print "even" or "odd" without using conditional statement?
// int main()
// {
//     char arr[2][5] = {"Even", "Odd"};
//     int no;
//     printf("Enter a number: ");
//     scanf("%d", &no);
//     printf("number is %s", arr[no % 2]);
//     return 0;
// }
// //________________________________________________________________________________
// // 98)c code to draw the pattern?
// //       1
// //     2 3 2
// //   3 4 5 4 3
// // 4 5 6 7 6 5 4
// int main()
// {
//     int i, space, rows, k, count = 0, count1 = 0;
//     printf("enter number of rows:");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (space = 1; space <= rows - i; space++)
//         {
//             printf(" ");
//             count++;
//         }
//         for (k = 0; k != 2 * i - 1; k++)
//         {
//             if (count <= rows - 1)
//             {
//                 printf("%d", i + k);
//                 count++;
//             }
//             else
//             {
//                 count1++;
//                 printf("%d", (i + k - 2 * count1));
//             }
//         }
//         count1 = count = k = 0;
//         printf("\n");
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 99)get the output?
// #define COMP(A, B) (((A) * (A)) + ((B) * (B)))
// int main()
// {
//     int x = 2, y = 3, z;
//     z = COMP(x++, ++y);
//     printf("x = %d\n", x);
//     printf("y = %d\n", y);
//     printf("z = %d\n", z);
// }
// // output ? x = 4 y = 5 z = 29 or 31
// // (if z 29 the compiler will find it
// // as->x++ then x++->3 so 3 * 3 = 9
// // and ++y = 4 then++ y = 5->5 * 4 = 2
// // , so the o / p = 29)
// // (if z 31 the compile will find it as->x++ = 2 then x++ = 3 so 2 * 3 = 6 and++y = 4 then++ y = 5->5 * 5 = 25, so o / p = 31)
// //________________________________________________________________________________
// // 100) draw the pattern
// // ? 1 01 101 0101 10101
// int main(int argc, char *argv[])
// {
//     int i, j, rows;
//     printf("Input number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; ++i)
//     {
//         for (j = 1; j <= i; ++j)
//         {
//             printf("%d", (j + i + 1) % 2);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 100)how to fine size of two dimentional array without sizeof operator?
// int main(void)
// {
//     int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int *p1 = &a[0][0];      // pointer points to the first element in the array
//     int(*p2)[3][3] = &a + 1; // pointer points to the whole array
//     int size = *(*p2) - p1;
//     printf("%d", size);
//     return 0;
// }
// //________________________________________________________________________________
// // 101)using qsort function?
// int intcompare(const void *x, const void *y)
// {
//     int a = *(const int *)x;
//     int b = *(const int *)y;
//     if (a > b)
//         return 1;
//     else if (a < b)
//         return -1;
//     return 0;
// }
// int floatcompare(const void *x, const void *y)
// {
//     float a = *(const float *)x;
//     float b = *(const float *)y;
//     if (a > b)
//         return 1;
//     else if (a < b)
//         return -1;
//     return 0;
// }
// int main(void)
// {
//     int intarr[6] = {4, 7, 8, 3, 1, 10}, i;
//     qsort(intarr, 6, sizeof(int), intcompare);
//     for (i = 0; i < 6; i++)
//         printf("%d ", intarr[i]);
//     printf("\n");
//     float fltarr[6] = {4.5, 7.3, 8.1, 3.7, 1.9, 10.2};
//     qsort(fltarr, 6, sizeof(float), floatcompare); // qsort(void *a,size_t size, size_t sizeofdatatype,int(*comp)(const void *a, const void *b) )
//     for (i = 0; i < 6; i++)
//         printf("%f ", fltarr[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // 102)using Memcpy to copy string or array of integers?

// int Memcpy(void *dst, const void *src, unsigned int cnt)
// {
//     char *pdes = (char *)dst;
//     const char *psrc = (const char *)src;
//     while (cnt)
//     {

//         *(pdes++) = *(psrc++);
//         cnt--;
//     }
//     return 0;
// }
// /*int main(void)
// {
//   char *Message="welcome to aticle world";
//   char display[32]={0};
//   short len=strlen(Message)+1;
//   Memcpy(display,Message,len);
//   printf("%s",display);
//     return 0;
// }*/
// int main(void)
// {
//     int a1[6] = {4, 7, 2, 3, 9, 1}, i;
//     int a2[6] = {0};
//     Memcpy(a2, a1, sizeof(a1)); // we can use memcpy(a2,a1,sizeof(a1));
//     for (i = 0; i < 6; i++)
//         printf("%d ", a2[i]);
//     return 0;
// }
// //________________________________________________________________________________
// // 103)using function pointer as arguments?
// typedef int (*pf)(int,int);
// int arithmetic(int data1, int data2, pf calculation)
// {
//     int iret = calculation(data1, data2);
//     return iret;
// }
// int addfun(int num1, int num2)
// {
//     return num1 + num2;
// }
// int subfun(int num1, int num2)
// {
//     return num1 - num2;
// }
// int main()
// {
//     int n1 = 20, n2 = 10, choice, ret;
//     while (1)
//     {
//         printf("\nenter choice 1 for add and 2 for sub:");
//         scanf("\n%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             ret = arithmetic(n1, n2, addfun);
//             printf("\nsum of numbers:%d", ret);
//             break;
//         case 2:
//             ret = arithmetic(n1, n2, subfun);
//             printf("\nsub of numbers:%d", ret);
//             break;
//         case 3:
//             exit(0);
//         }
//     }
//     return 0;
// }
// //________________________________________________________________________________
// // 104)using of array of function pointer?
// int addnum(int a, int b)
// {
//     return a + b;
// }
// int subnum(int a, int b)
// {
//     return a - b;
// }
// int mulnum(int a, int b)
// {
//     return a * b;
// }
// int main()
// {
//     int choice, num1, num2;
//     int (*pf[3])(int, int) = {addnum, subnum, mulnum};
//     printf("enter choice 0 for int and 1 for sub and 2 for mul:");
//     scanf("%d", &choice);
//     printf("enter data1:");
//     scanf("%d", &num1);
//     printf("enter data2:");
//     scanf("%d", &num2);
//     int ret = (*pf[choice])(num1, num2);
//     printf("%d", ret);
//     return 0;
// }
// //________________________________________________________________________________
// // 104)using bit fileds in embdedd c?
// // suppose a microcntroller has of 8 pins and each pin are connected to led.we can easily change the statues of led by using bitfield.
// typedef union
// {
//     struct
//     {
//         unsigned char led1 : 1;
//         unsigned char led2 : 1;
//         unsigned char led3 : 1;
//         unsigned char led4 : 1;
//         unsigned char led5 : 1;
//         unsigned char led6 : 1;
//         unsigned char led7 : 1;
//         unsigned char led8 : 1;
//     };
//     unsigned char port;
// } Led_state;
// int main()
// {
//     volatile Led_state *pLed_state = (volatile Led_state *)0xE002c000; // 0xE002c00 is address of register
//     pLed_state->led1 = 1;
// }
// // not suggesting to use bit filed in the mapping of hardware register because the allocation of bit - fields depends on compiler.might be the result of one compiler can be different from another compiler.The order of allocation of bit - fileds depends on type of endianees
