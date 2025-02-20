// Tejas Vilas chaudhari

// Write a C program to define int, float, string and character variables also print their
// values in console.

#include <stdio.h>

int main()
{
    int integerVar = 10;
    float floatVar = 3.14;
    char charVar = 'A';
    char strVar[] = "hellocdac";

    printf("Integer %d\n", integerVar);
    printf("Float %.2f\n", floatVar);
    printf("Character %c\n", charVar);
    printf("String %s\n", strVar);

    return 0;
}
