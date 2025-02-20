// Tejas vilas chaudhari
//  Print character N times using recursion

#include <stdio.h>

void printChar(int n, char ch)
{
    if (n > 0)
    {
        printf("%c", ch);
        printChar(n - 1, ch);
    }
}

int main()
{
    int n;
    char ch;

    printf("number ");
    scanf("%d", &n);
    printf("character ");
    scanf("%c", &ch);

    printChar(n, ch);

    return 0;
}