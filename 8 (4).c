
//Tejas vilas chaudhari

//8. Write a C program that demonstrates the order of evaluation in expressions with operators. Use 
//parentheses to show how operator precedence affects the result.

#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 2;
    int result;

    result = a + b * c; 
    printf("without parentheses %d\n", result);

    result = (a + b) * c; 
    printf(" with parentheses %d\n", result);

    return 0;
}
