#include <stdio.h>

int main()
{
    // Normal Number.
    long long int Rand_Address = 0x00000000FFFFAAAA;
    // 0x00000000FFFFAAAA <- For Compiler point of View it is still considered long long number not an address.
    printf("Rand_Address= %llx \n", Rand_Address);

    // Pointer Without Casting.
    char *P_address1 = 0x00000000FFFFAAAA; // { warning: initialization makes pointer from integer without a cast [-Wint-conversion]}
    // char* for compiler is a Pointer.
    // So Compiler will see {Type mis-match}.
    printf("P_Address1= %llx \n", P_address1);

    // Pointer With Casting.
    // So, we need to tell the compiler it is an address not a number, by our {Explicit Casting}.
    char *P_address2 = (char *)0x00000000FFFFAAAA;
    printf("P_Address2= %llx \n", P_address2);

    return 0;
}