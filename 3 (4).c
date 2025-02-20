//TEJAS VILAS CHAUDHARI
// Append Text to an Existing File

#include <stdio.h>

int main() {
    FILE *file = fopen("first.txt", "a");
    if (file == NULL) {
        perror("some error in opening file");
        return 1;
    }

    char buffer[256];
    printf("Enter text to append to file ");
    fgets(buffer, sizeof(buffer), stdin);

    fputs(buffer, file);

    fclose(file);
    return 0;
}


