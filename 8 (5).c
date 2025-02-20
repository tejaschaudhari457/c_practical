// Tejas Vilas Chaudhari

// 8. Write a C program to print the multiplication table for a number up to 10 using nested for loops. The number should be input by the user.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number ");
    scanf("%d", &num);

    printf("Multiplication table for %d\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
