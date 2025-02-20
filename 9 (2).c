//TEJAS VILAS CHAUDHARI
//Access array elements using pointer arithmetic


#include <stdio.h>

int main() {
    int arr[10];
    int i;

    printf("Enter 10 elements\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", arr + i);  
    }

    printf("You entered\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));  
    }

// printf("Enter 10 elements\n");
// while (int i = 0; i < 10; i++)
// {
//      scanf("%d", arr + i);
// }


// printf("You entered\n");
// while (int i = 0; i < 10; i++)
// {
//     printf("%d ", *(arr + i));
// }


// do while (/* condition */)
// {
//     /* code */
// }

    return 0;
}