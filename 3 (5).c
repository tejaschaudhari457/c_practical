//Tejas vilas chaudhari

//3. Write a C program that initializes a variable x to 10. Use compound assignment operators to 
//increment x by 5, decrement x by 2, multiply x by 3, and divide x by 4. Print the final value of 
//x.

#include <stdio.h>

int main() {
    int x = 10;

    x += 5;  
    x -= 2; 
    x *= 3;  
    x /= 4; 

    printf("Final value of is %d\n", x);

    return 0;
}
