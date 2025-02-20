//Tejas vilas chaudhari

//Find Length of a String Without `strlen`

#include <stdio.h>

int stringlength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string ");
    gets(str);  

    int length = stringlength(str);
    printf("Length of the string %d\n", length);
    return 0;
}
