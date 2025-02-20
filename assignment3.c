//Tejas vilas chaudhari

//  Calculate Average of Array Elements

#include <stdio.h>

float calculateAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
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

    printf("Average %.2f\n", calculateAverage(arr, size));
    return 0;
}
