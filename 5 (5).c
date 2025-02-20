// Tejas vilas chaudhari

// 5. Write a C program that uses unary operators to increment and decrement a variable. Initialize
// a variable, use both pre-increment and post-increment operators, and print the results.

#include <stdio.h>

int main()
{
    int x = 5;

    printf("Initial value is %d\n", x);

    printf("Pre-increment  %d\n", ++x);
    printf("Value after pre-increment %d\n", x);

    printf("Post-increment %d\n", x++);
    printf("Value after post-increment %d\n", x);

    printf("Pre-decrement  %d\n", --x);
    printf("Value after pre-decrement %d\n", x);

    printf("Post-decrement %d\n", x--);
    printf("Value after post-decrement %d\n", x);

    return 0;
}
