//TEJAS VILAS CHAUDHARI
// Concatenate two strings using pointers for `strcat`


#include <stdio.h>
#include <string.h>

void concat(char *dest, char *src) 
{
    while (*dest) {
        dest++;  
    }
    while (*src) {
        *dest = *src; 
        dest++;
        src++;
    }
    *dest = '\n';  
}

int main() {
    char str1[50], str2[50];

    printf("Enter first string ");
    scanf("%s", str1);
    printf("Enter second string ");
    scanf("%s", str2);

    concat(str1, str2);
    printf("Concatenated string %s\n", str1);

    return 0;
}