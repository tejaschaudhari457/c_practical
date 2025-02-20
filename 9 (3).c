// //TEJAS VILAS CHAUDHARI
// // 9. Perform operations using enum

// #include <stdio.h>

// enum Operation {ADD,SUBTRACT,MULTIPLY,DIVIDE};

// int performOperation(int a, int b, enum Operation op)
// {
//     switch (op)
//     {
//     case ADD:
//         return a + b;
//     case SUBTRACT:
//         return a - b;
//     case MULTIPLY:
//         return a * b;
//     case DIVIDE:
//         return b != 0 ? a / b : 0;
//     }
//     return 0;
// }

// int main()
// {
//     int result = performOperation(10, 5, MULTIPLY);
    
//     printf("Result is  %d\n", result);
//     return 0;
// }



#include <stdio.h>
#include <math.h>

int main() {
   float p = fmod(13, -7);
//    float q = fmod(9, 3);
//    float r = fmod(7, 10);
//    float s = fmod(5, 2);

   printf("%f %f %f %f", p);
   return 0;
}