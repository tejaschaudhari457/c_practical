// Tejas Vilas Chaudhari

//7. Write a C program that reverses a given integer using a do-while loop

#include <stdio.h>

int main() {
    int num, revers = 0;
    
    printf("Enter an integer ");
    scanf("%d", &num);
    
    do {
        revers = revers * 10 + num % 10;
        num /= 10;
    } while (num != 0);
    
    printf("Reversed integer %d\n", revers);
    
    return 0;
}
