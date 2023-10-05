#include <stdio.h>


struct SPersonExample
{
    char Name[20];
    double n;
    int x;
    char z;
    int y;
};

// Struct Declaration.
struct SPerson
{
    char m_Name[24];
    int m_ID;
    char m_Age;
    short m_Salary;
    double m_Weight;
};

int main(int argt, char **argv)
{
    // Initalize Object {manager} of {struct SPerson}.
    struct SPerson manager = {"Mohamed Hady", 162, 39, 3000, 79.5};

    // Initialize Array OF Objects {employees} of {struct SPerson}
    struct SPerson employees[] =
        {
            {"Mostafa Said", 163, 30, 1500, 81.0},
            {"Ahmed Salah", 164, 25, 1200, 91.0},
            {"Safa Fayez", 165, 25, 1400, 65.0}};

    // Counter.
    int i;
    // Pointer To Struct SPerson.
    struct SPerson *P;

    // Assign Pointer P Look At Object manager.
    P = &manager;

    // Print members of Object manager.
    printf("manager:\t %s, %d, %d, %d, %lf\r\n"
        , P->m_Name, P->m_ID, (int)P->m_Age, (int)P->m_Salary, P->m_Weight);

    // Assign Pointer P Look At Array of Object employees.
    P = employees;

    // Print members of each element of array Object employees.
    for (i = 0; i < sizeof(employees) / sizeof(struct SPerson); i++, P++)
    {
        printf("Employees[%d]: %s, %d, %d, %d, %lf\r\n"
            , (i + 1), P->m_Name, P->m_ID, (int)P->m_Age, (int)P->m_Salary, P->m_Weight);
    }

    printf("Size = %d\n",sizeof(struct SPersonExample));
    printf("Size = %d\n",sizeof(struct SPerson));
    printf("Size = %d\n",sizeof(manager));
    printf("Size = %d\n",sizeof(employees));
    printf("Size = %d\n",sizeof(double));

    return 0;
}
