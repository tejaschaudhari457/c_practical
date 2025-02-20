//TEJAS VILAS CHAUDHARI
// Merge the Contents of Multiple Text Files into a Single File

#include <stdio.h>

int main() {
    FILE *destination = fopen("file.txt", "w");
    if (destination == NULL) {
        perror("some error found ");
        return 1;
    }

    char *fileNames[] = {"file1.txt", "file2.txt", "file3.txt"};
    int numFiles = sizeof(fileNames) / sizeof(fileNames[0]);

    for (int i = 0; i < numFiles; i++) {
        FILE *source = fopen(fileNames[i], "r");
        if (source == NULL) {
            perror("Error");
            fclose(destination);
            return 1;
        }

        char ch;
        while ((ch = fgetc(source)) != EOF) {
            fputc(ch, destination);
        }

        fclose(source);
        fprintf(destination, "\n"); 
    }

    fclose(destination);
    return 0;
}
