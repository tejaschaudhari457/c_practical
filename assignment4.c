//Tejas vilas chaudhari

// Reverse an Array

#include <stdio.h>

void reversearray(int arr[], int size) {
    for(int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int size;
    printf("Enter the size of the array ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    reversearray(arr, size);

    printf("Revers array ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
