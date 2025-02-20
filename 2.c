//TEJAS VILAS CHAUDHARI

// Return a String Representing a Color

#include <stdio.h>

typedef enum
{
    RED,
    GREEN,
    BLUE
} Color;

const char *getColorName(Color color)
{
    switch (color)
    {
    case RED:
        return "Red";
    case GREEN:
        return "Green";
    case BLUE:
        return "Blue";
    default:
        return "Unknown";
    }
}

int main()
{
    Color favoriteColor = RED;
    printf("your Favorite color is %s\n", getColorName(favoriteColor));
    return 0;
}
