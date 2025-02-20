//Tejas Vilas chaudhari

//Write a C program with static local variable named counter which should count from 1 to 5

#include <stdio.h>

void count() {
    static int counter = 1;  
    printf("%d\n", counter);
    counter++;
}

int main() {
    for (int i = 0; i < 5; i++) {
        count();
    }

    return 0;
}
