//TEJAS VILAS CHAUDHARI
// Get a string using `getchar` function:

#include <stdio.h>

int main()
{
    char str[70];
    int i = 0;
    char ch;

    printf("Enter a string ");
    while ((ch = getchar()) != '\n')
    {
        str[i] = ch;
        i++;
    }
    str[i] = '\n';

    printf("i entered %s\n", str);

    // do
    //     printf("You entered %s\n", str);
    //     while (ch = getchar()) !='\n')
    //     {
    //         str[i] = ch;
    //         i++;
    //         str[i] = '\n';
    //     }

        return 0;
}