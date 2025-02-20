//Tejas vilas chaudhari

//Find Largest and Smallest Elements in an Array
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d element" , size);
    for(int i = 0; i < size; i++) {
        scanf("%d\n", &arr[i]);
    }

    printf("Largest element %d\n", findLargest(arr, size));
    printf("Smallest element%d\n", findSmallest(arr, size));
    return 0;
}


int findLargest(int arr[], int size) {
    int largest = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int findSmallest(int arr[], int size) {
    int smallest = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

