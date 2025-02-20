// Tejas Vilas Chaudhari

//2. Write a C program to find out maximum number out of 3 numbers entered by user.

#include <stdio.h>

int main() {
    int a, b, c, max;
    
    printf("Enter three numbers ");
     scanf("%d %d %d", &a, &b, &c);
    
    if(a > max)  max= a;
    if (b > max)  max = b;
    if (c > max)  max = c;
    
    printf("Maximum %d\n", max);
    
    return 0;
}
