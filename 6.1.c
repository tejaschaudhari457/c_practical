// Tejas Vilas Chaudhari

//6. Write a C program that prints the Fibonacci sequence up to n term. 
//The value of n should be provided by the user by using for loop 
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, nextdigit;
    int count = 0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci sequence: ");
   
    
    for (int i = 0; i < count; i++)
    {
        printf("%d ", a);
        nextdigit = a + b;
        a = b;
        b = nextdigit;
    }
    

    /*while (count < n) {
        printf("%d ", a);
        nextdigit = a + b;
        a = b;
        b = nextdigit;
        count++;
    }*/

    printf("\n");
    
    return 0;
}