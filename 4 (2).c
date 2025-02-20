//TEJAS VILAS CHAUDHARI
// Find factorial using functions

#include <stdio.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main()
{
    int num;

    printf("Enter a user number ");
    scanf("%d", &num);

    printf("Factorial of n is %d\n", factorial(num));

    return 0;
}