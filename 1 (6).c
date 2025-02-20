// Tejas Vilas Chaudhari

// Write a C program to check maximum and minimum number. The numbers should be entered by user.

#include <stdio.h>

int main()
{
    int a, b, max, min;

    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);

    // max = (a >b) ? a : b;
    // min = (a < b) ? a : b;

    if ((a > b) ? max : min)
    {

        printf("Maximum  %d\n", max);
    }
    else
        printf("Minimum  %d\n", min);

    return 0;
}
