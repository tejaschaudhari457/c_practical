// Tejas Vilas Chaudhari

//4. Write a C program that calculates the sum of the first n positive integers using a for
//loop. The value of n should be input by the user.

#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the value of n ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    printf("Sum of total number %d ", sum);
    
    return 0;
}
