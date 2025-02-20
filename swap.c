//Tejas Vilas chaudhari

//Initialise and assign integer values to 2 variables named x and y. Write a C code to swap 
//their values without using any other variable. Print the values before and after 
//swapping.

#include <stdio.h>

int main() {
    int x = 5, y = 10;
    printf("Before Swap \n");
    printf("x = %d, y = %d\n", x, y);
    x = x + y;  
    y = x - y;  
    x = x - y;  

    printf("After Swap \n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
