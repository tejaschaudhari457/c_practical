//Tejas vilas chaudhari

//Add Two Numbers

#include <stdio.h>

int input() {
    int num;
    printf("Enter a number ");
    scanf("%d", &num);
    return num;
}

int add(int a, int b) {
    return a + b;
}

void output(int result) {
    printf("sum is %d\n", result);
}

int main() {
    int num1 = input();
    int num2 = input();
    int sum = add(num1, num2);
    output(sum);
    return 0;
}
