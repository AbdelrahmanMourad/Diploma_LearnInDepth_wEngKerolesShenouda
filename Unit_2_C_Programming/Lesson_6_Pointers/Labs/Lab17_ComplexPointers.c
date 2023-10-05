#include <stdio.h>

int main(int argt, char **argv)
{
    int *(*(*fp1)(int))[10]; // Pointer to Function, takes int & returning Pointer, to Array of 10 int Pointers.
    int *(*(*arr[5]()))();   // Array of 5 Pointers to Function, returning Pointer to Function, returning int Pointer.

    int i;          // an int variable.
    int *p;         // Pointer to int.
    int a[];        // array of int variables.
    int f();        // function, takes void arguements and return int variable.
    int **pp;       // pointer to pointer to int.
    int(*pa)[];     // Pointer to array of ints.
    int (*pf)();    // pointer to function, that takes void arguments and return int.
    int *ap[];      // Array of Pointers to ints.
    int aa[][];     // 2D Array of ints (Array of arrays).
    int af[]();     // Array of Functions, that each takes void and return int. {ILLEGAL}.
    int (*fp)();    // Pointer to Function, that takes void and return int.
    int *fp();      // Function Takes void and return Pointer to int.
    int fa()[];     // Function, that return array of ints. {ILLEGAL}.
    int ff()();     // Function, that returns another Function, that returns int. {ILLEGAL}.
    int ***ppp;     // Pointer to Pointer to int Pointer.
    int(**ppf)[];   // Pointer to Pointer to Array of ints.
    int (**ppf)();  // Pointer to Pointer to Function, that takes void and return int.
    int *(*pap)[];  // Pointer to Array of int Pointers.
    int(*paa)[][];  // Pointer to 2-D Array of ints (Pointer to an array of arrays of ints).
    int(*paf)[]();  // Pointer to Array of Functions, that each return int. {ILLEGAL}.
    int *(*pfp)();  // Pointer to Function, that return an int pointer.
    int (*pfa)()[]; // Pointer to Function, that returns Array of ints. {ILLEGAL}.
    int (*pff)()(); // Pointer to Function, that returns a Function, that returns an int. {ILLEGAL}.
    int **app[];    // Array of Pointers to int Pointers.
    int(*apa[])[];  // Array of Pointers to Array of ints.
    int (*apf[])(); // Array of Pointers to Functions, that each return an int.
    int *aap[][];   // 2D Array of int Pointers. (Array of Arrays of int Pointers).
    int aaa[][][];  // 3D Array of ints. (Array of Arrays of Arrays of ints).
    int aaf[][]();  // 2D Array of Functions, that retun an int. {ILLEGAL}.
    int *afp[]();   // Array of Pointers to Functions, that return int. {Wrong Reading}
                    // Array of Functions, that return int pointers. {ILLEGAL} {Right Reading}
    int afa[]()[];  // Array of Functions, that return Array of ints. {ILLEGAL}.
    int aff[]()();  // Array of Functions, that return Functions, that return ints. {ILLEGAL}.
    int **fpp();    // Function, that returns Pointer to int Pointer.
    int(*fpa())[];  // Function, that return Pointer to Array of ints.
    int (*fpf())(); // Function, that returns Pointer to Function, that returns int.
    int *fap()[];   // Function, that returns Array of int Pointers. {ILLEGAL}.
    int faa()[][];  // Function, that returns 2D array of ints. {ILLEGAL}.
    int faf()[]();  // Function, returning Array of Functions, Returning int. {ILLEGAL}.
    int *ffp()();   // Function, returning Function, returning an int Pointer. {ILLEGAL}.

    return 0;
}