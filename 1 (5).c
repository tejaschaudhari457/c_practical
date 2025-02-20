//Tejas vilas chaudhari

//1. Write a C program that demonstrates the difference between pre-increment (++x) and 
//post-increment (x++) operators. Print the values before and after each operation.

#include <stdio.h>

int main() {
    int x = 5;

   // printf("Initial value of x %d\n", x);

    printf("Pre-increment ++x = %d\n", ++x);
    printf("Value after pre-increment %d\n", x);

    x = 5; 
    printf("Post-increment x++ = %d\n", x++);
    printf("Value after post-increment %d\n", x);

    return 0;
}






