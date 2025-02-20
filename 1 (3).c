//TEJAS VILAS CHAUDHARI
// Define a Rectangle structure and print its values

#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

int main()
{
    struct Rectangle r = {4.5, 5.8};
    printRectangle(r);
    return 0;
}

void printRectangle(struct Rectangle value)
{
    printf("Length %f\n", value.length);
    printf("Width %f\n", value.width);
   // return 0;
}

