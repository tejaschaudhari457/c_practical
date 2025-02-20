//Tejas Vilas chaudhari

// Write a C program that demonstrates the concept of variable scope by using local and 
//global variables. Show how changes to a global variable affect the output in different 
//functions


#include <stdio.h>

int globalVar = 100;  
void display() {
    printf("Global %d\n", globalVar);
}

int main() {
    int localVar = 200;  

    printf("Local %d\n", localVar);
   // display();

    globalVar = 300; 
   // display();

    return 0;
}
