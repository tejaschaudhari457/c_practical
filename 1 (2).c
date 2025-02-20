
//Tejas vilas chaudhari
// Print character N times using a `while` loop


#include <stdio.h>

int main() {
    int n;
    char ch;

    printf("Enter a number ");
    scanf("%d", &n);
    printf("Enter a character ");
    scanf(" %c", &ch);

    int i = 0;
    // while (i < n) {
    //     printf("%c", ch);
    //     i++;
    // }

for ( i = 0; i < n; i++)
{
    printf("%c", ch);
}

    return 0;
}