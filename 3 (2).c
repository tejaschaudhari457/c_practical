//TEJAS VILAS CHAUDHARI
// Calculate power of base^index

#include <stdio.h>

int power(int base, int index) {
    int result = 1;
    for (int i = 0; i < index; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, index;

    printf("Enter the base ");
    scanf("%d", &base);
    printf("Enter the index ");
    scanf("%d", &index);

    printf("%d ^ %d = %d\n", base, index, power(base, index));

    return 0;
}