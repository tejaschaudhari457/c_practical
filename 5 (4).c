//TEJAS VILAS CHAUDHARI
// Count the Number of Characters, Words, and Lines in a File

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("newfile.txt", "r");
    if (file == NULL) {
        perror("Error");
        return 1;
    }

    int ch, prevChar = ' ';
    int charCount = 0, wordCount = 0, lineCount = 0;

    while ((ch = fgetc(file)) != EOF) {
        charCount++;
        if (ch == '\n') {
            lineCount++;
        }
        if (isspace(ch) && !isspace(prevChar)) {
            wordCount++;
        }
        prevChar = ch;
    }

    
    if (!isspace(prevChar)) {
        wordCount++;
    }

    fclose(file);

    printf("Characters %d\n", charCount);
    printf("Words %d\n", wordCount);
    printf("Lines %d\n", lineCount + 1);

    return 0;
}
