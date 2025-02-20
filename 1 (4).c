//TEJAS VILAS CHAUDHARI
// Read the Contents of a File and Display It on the Screen

#include <stdio.h>

int main() {
    FILE *file = fopen("newfile.txt", "r");
    if (file == NULL) {
        perror("is their error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
