// Tejas Vilas chaudhari

// Write a C program that initializes global and local variables with different values. Print
// the values to demonstrate how initialization works for each scope.

#include <stdio.h>

int globalVar = 50;

int main()
{
    int localVar = 100;

    printf("Global variable  %d\n", globalVar);
    printf("Local variable %d\n", localVar);

    return 0;
}
