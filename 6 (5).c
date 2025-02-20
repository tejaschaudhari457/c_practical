// Tejas vilas chaudhari

// 6. Write a C program that calculates the maximum of three numbers using the conditional
//(ternary) operator. The program should handle cases where the numbers are equal.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers ");
    scanf("%d %d %d", &a, &b, &c);

    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("Maximum value is: %d\n", max);

    return 0;
}
