// Tejas Vilas Chaudhari

//9. Write a C program that prints a right-angled triangle pattern of stars (*) with n rows 
//using nested for loops. The number of rows n should be provided by the user.

#include <stdio.h>

int main() {
    int rows;
    int i; //row
    int j; //coloum
    
    printf("Enter the number of rows ");
    scanf("%d", &rows);
    
    for ( i = 1; i <= rows ; i++) {
        
        
        for ( j = 1;j <=i ; j++) {
            
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


