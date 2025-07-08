#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
  /*  int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5}; // Example array with a duplicate element
    int k = 11; // Specific target number to find the sum of two elements in the array

    // Find all pairs of elements in the array that sum to k
    for (int i = 0; i < 11; i++) {
        for (int j = i + 1; j < 11; j++) {
            if (arr[i] + arr[j] == k) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                return 0;
            }
        }
    }

    printf("No pair found.\n");
    return 0;
}*/




//another method by two pointer method
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5}; // Example array with a duplicate element
    int k = 11; // Specific target number to find the sum of two elements in the array
    int left = 0;
    int right = 10; // Last index of the array

    while (left < right) {
        if (arr[left] + arr[right] == k) {
            printf("Pair found: (%d, %d)\n", arr[left], arr[right]);
            return 0;
        } else if (arr[left] + arr[right] < k) {
            left++;
        } else {
            right--;
        }
    }

    printf("No pair found.\n");
    return 0;
}