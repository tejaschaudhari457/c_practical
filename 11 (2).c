// Tejas Vilas Chaudhari

// 11. Write a menu driven program to perform basic arithmetic operations.
// Menu options – 0 to Exit, 1 to Add, 2 to Subtract, 3 to Multiply, 4 to Divide.
// Depending upon the choice entered by user the arithmetic operations should be
// performed and continue till user wants.

#include <stdio.h>

int main()
{
    int choice;
    float num1, num2;

    do
    {
        printf("input");
        printf("0- Exit\n");
        printf("1- Add\n");
        printf("2- Subtract\n");
        printf("3- Multiply\n");
        printf("4- Divide\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting \n");
            break;
        }

        printf("Enter two numbers ");
        scanf("%f %f", &num1, &num2);

        switch (choice)
        {
        case 1:
            printf("Result %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Result %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Result %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
            {
                printf("Result %.2f\n", num1 / num2);
            }
            else
            {
                printf("Division by zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
            break;
        }

    } while (choice != 0);

    return 0;
}
