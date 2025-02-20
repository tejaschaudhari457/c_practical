// Tejas Vilas Chaudhari

//6. Write a C program that prints the Fibonacci sequence up to n terms using a while loop. 
//The value of n should be provided by the user

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, nextdigit;
    int count = 0;
    
    printf("Enter the number of terms ");
    scanf("%d", &n);
    
    printf("Fibonacci series ");
   
    
    
    while (count < n) {
        printf("%d ", a);
        nextdigit = a + b;
        a = b;
        b = nextdigit;
        count++;
    }
    printf("\n");
    
    return 0;
}

