#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

//bubble sort optimized
int main() {    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    int swapped; // Flag to check if any swapping occurred

    // Bubble Sort algorithm with optimization
    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Reset the flag for each outer loop iteration
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Set the flag to indicate a swap occurred
            }
        }
        // If no two elements were swapped in the inner loop, then the array is sorted
        if (swapped == 0) {
            break;
        }
    }

    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}