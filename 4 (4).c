//TEJAS VILAS CHAUDHARI
// Copy the Contents of One File to Another

#include <stdio.h>

int main() {
    FILE *source = fopen("mysource.txt", "r");
    if (source == NULL) {
        perror("Error");
        return 1;
    }

    FILE *destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        perror("file have error");
        fclose(source);
        return 1;
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);
    return 0;
}
