#include <stdio.h>

// Declare Struct.
struct SDataSet
{
    unsigned char data1;
    unsigned int data2; // Padding, each element take 4-Bytes, Struct Size = 16-Bytes
    unsigned char data3;
    unsigned short data4;
};

// Create Object "data1" from Struct "SDataSet".
struct SDataSet data1;

// Function take struct base address, sizeof struct, to print all data inside the struct.
// Print Data Bit_By_Bit.
void print_memory_range(char *base, int size)
{
    int i;
    printf("Print Struct {bit_by_bit} Using Fn, Print_Memory_range\n");
    for (i = 0; i < size; i++)
    {
        printf("%p \t %x \n", base, (unsigned char)*base);
        base++;
    }
    printf("End Print {bit_by_bit} Using Fn, Print_Memory_range\n");
}

int main()
{
    data1.data1 = 0x11;
    data1.data2 = 0xFFFFEEEE;
    data1.data3 = 0x22;
    data1.data4 = 0xABCD;

    print_memory_range((char *)&data1, sizeof(data1)); // Warning, Incompitable pointer type.

    // Pointer to base variable inside struct in the memory.
    char *p = (char *)&data1;
    printf("p+8=%d\n", (unsigned char)*(p + 8));

    // Pointer To Struct of Type {struct SdataSet}
    struct SDataSet *Pstruct = &data1;
    printf("p+8=%d\n", (unsigned char)Pstruct->data3);

    return 0;
}