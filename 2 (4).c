//TEJAS VILAS CHAUDHARI
// Create a File and Write User Input into It


#include <stdio.h>

int main() {
    FILE *file = fopen("myfile.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char buffer[128];
    printf("give the input text to write to file ");
    fgets(buffer, sizeof(buffer), stdin);

    fputs(buffer, file);

    fclose(file);
    return 0;
}
