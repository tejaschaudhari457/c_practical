//Tejas Vilas chaudhari


// Write a C program to print table of number entered by user using printf and scanf 
//functions.

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
