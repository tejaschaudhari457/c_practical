//TEJAS VILAS CHAUDHARI
// 10. Perform user input-based operations using enum

#include <stdio.h>

enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

int performOperation(int a, int b, enum Operation op)
{
    switch (op)
    {
    case ADD:
        return a + b;
    case SUBTRACT:
        return a - b;
    case MULTIPLY:
        return a * b;
    case DIVIDE:
        return b != 0 ? a / b : 0;
    }
    return 0;
}

int main()
{
    int a, b;
    enum Operation op;
    printf("Enter two integers ");
    scanf("%d %d", &a, &b);

    printf("Select operation (0-ADD, 1-SUBTRACT, 2-MULTIPLY, 3-DIVIDE) ");
    scanf("%d", (int *)&op);

    int result = performOperation(a, b, op);
    printf("Result %d\n", result);
    return 0;
}
