#include <stdio.h>

// Declare Struct SDate.
struct SDate
{
    int m_day;
    int m_month;
    int m_year;
};

// Declare Struct SStudent.
struct SStudent
{
    char m_Name[256];
    char m_Description[8192];
    struct SDate m_Birthdate;
    double m_Degrees[10];
    double m_TotalDegrees;
};

// Function Takes struct SStudent and return struct SStudent.
struct SStudent SlowUpdateTotalDegree_PassByValue(struct SStudent student)
{
    student.m_TotalDegrees = 0;
    int i = 0;
    for (i = 0; i < 10; i++)
        student.m_TotalDegrees += student.m_Degrees[i];

    return student;
}

// Function Takes Pointer to struct SStudent and return nothing.
void SlowUpdateTotalDegree_PassByReference(struct SStudent *student)
{
    student->m_TotalDegrees = 0;
    int i = 0;
    for (i = 0; i < 10; i++)
        student->m_TotalDegrees += student->m_Degrees[i];
}

// Driving Code.
void main(void)
{
    // Object From Struct.
    struct SStudent S =
        {
            "Ahmed Said",
            "Ahmed's Description",
            {22, 12, 1990},
            {88, 98, 88, 92, 98, 87, 66, 94, 87, 99}, // Weired, This is how to assign array inside a struct!!
            0};

    // Method 1: Without Pointers.
    S = SlowUpdateTotalDegree_PassByValue(S);
    printf("Total Degrees OF %s is %2.2lf (%2.2lf%%)\r\n", S.m_Name, S.m_TotalDegrees, (double)(100.0 * S.m_TotalDegrees / 1000.0));

    // // Method 2: With Pointers.
    SlowUpdateTotalDegree_PassByReference(&S);
    printf("Total Degrees OF %s is %2.2lf (%2.2lf%%)\r\n", S.m_Name, S.m_TotalDegrees, (double)(100.0 * S.m_TotalDegrees / 1000.0));
}