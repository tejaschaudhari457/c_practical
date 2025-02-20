//TEJAS VILAS CHAUDHARI
// 8. Define an enum for shapes and print descriptions using a switch statement

#include <stdio.h>

enum ShapeType
{CIRCLE,RECTANGLE,SQUARE,TRIANGLE};

void printShape(enum ShapeType shape)
{
    switch (shape)
    {
    case CIRCLE:
        printf("CIRCLE\n");
        break;

    case RECTANGLE:
        printf("RECTANGLE\n");
        break;

    case SQUARE:
        printf("SQUARE\n");
        break;
        
    case TRIANGLE:
        printf("TRIANGLE\n");
        break;
    }
}

int main()
{
    enum ShapeType shape = RECTANGLE;
    printShape(shape);
    return 0;
}