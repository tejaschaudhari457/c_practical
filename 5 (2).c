//TEJAS VILAS CHAUDHARI
// Swap two integers using functions


#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping a = %d, b = %d\n", a, b);
}

int main() {
    int a, b;

    printf("Enter two integers ");
    scanf("%d %d", &a, &b);

    printf("Before swapping a = %d, b = %d\n", a, b);
    swap(a, b);

    return 0;
}