// Tejas Vilas Chaudhari

//5. Write a C program to compute the factorial of a given positive integer using a for loop.

#include <stdio.h>

int main() {
    int n, factorial = 1;
    
    printf("Enter a positive integer ");
    scanf("%d", &n);
    
    for (int i = 1; i < n; i++) {
        factorial *= i;
    }
    
   printf("Factorial of %d %d\n", n, factorial);
    
    return 0;
}
