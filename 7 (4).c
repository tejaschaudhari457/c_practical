// Tejas vilas chaudhari

// 7. Write a C program that demonstrates the effects of type casting on arithmetic operations. The
// program should perform division with both integer and floating-point types and show how the
// results differ.

#include <stdio.h>

int main()
{
    int a = 5, b = 2, d;
    float c;

    c = (float)a / b;
    printf("Floating-point division %f\n", c);

    d = a / b;
    printf("Integer cast to float %d\n", c);

    return 0;
}
