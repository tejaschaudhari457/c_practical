// Tejas Vilas Chaudhari

//10. Write a C program to input data like: num1, num2 and arithmetic operation from user 
//and perform the task. 

#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    printf("enter your operator (+, -, *, /)");
    scanf(" %c", &op);
    printf("Enter two numbers  ");
    scanf("%d %d", &num1, &num2);
    
    switch (op) {
        case '+':
            printf("Result %d\n", num1 + num2);
            break;
        case '-':
            printf("Result %d\n", num1 - num2);
            break;
        case  '*':
            printf("Result %d\n", num1 * num2);
            break;
        case  '/':
            if (num2 != 0) {
                printf("Result %f\n", (float)num1 / num2);
            } else {
                printf("Division by zero\n");
            }
            break;  
        default:
            printf("Invalid operation\n");
            break;
    }
    
    return 0;
}
