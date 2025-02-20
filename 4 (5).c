//Tejas vilas chaudhari

//4. Write a C program that demonstrates the use of bitwise AND, OR, and XOR operators. 
//Initialize two integers and apply these operators to them, then print the results.

#include <stdio.h>

int main() {
    int a = 12;  
    int b = 7;   

   // printf("a = %d, b = %d\n", a, b);
    printf("%d\n", a & b);  
    printf("%d\n", a | b);  
    printf("%d\n", a ^ b); 
    printf("%d\n", a << 2);
    printf("%d\n", a >> 6);
    printf("%d\n", b >> 6);
    printf("%d\n", b << 6);
    

    return 0;
}
