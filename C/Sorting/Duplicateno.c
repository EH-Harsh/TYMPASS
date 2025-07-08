#include<stdio.h>
#include<stdlib.h>
#include<string.h>  

//givem arry of int 1 to n element size arry n+1 one element occuring more then once ie. duplicate no is present find duplicate element

//method 1
//normal by loop 

int main() {
    int arr[11]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5}; // Example array with a duplicate element
    for (int i = 0; i < 11; i++) {
        for (int j = i + 1; j < 11; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate element found: %d\n", arr[i]);
                return 0; // Exit after finding the first duplicate
            }
        }
    }

    printf("No duplicate element found.\n");
    return 0;
}





//method 2
//visited array
// int main() {
   /* int arr[11]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5}; // Example array with a duplicate element
    int visited[11] = {0}; // Array to keep track of visited elements

    for (int i = 0; i < 11; i++) {
        if (visited[arr[i]] == 1) {
            printf("Duplicate element found: %d\n", arr[i]);
            return 0; // Exit after finding the first duplicate
        }
        visited[arr[i]] = 1; // Mark the element as visited
    }

    printf("No duplicate element found.\n");
    return 0;
}*/



//method 3
// noraml sum formula
// int main() { 
  /*int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5}; // Example array with a duplicate element
    int n = 10; // Size of the array excluding the duplicate
    int expectedSum = (n * (n + 1)) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    for (int i = 0; i < 11; i++) {
        actualSum += arr[i];
    }

    int duplicate = actualSum - expectedSum;
    printf("Duplicate element found: %d\n", duplicate);

    return 0;
}*/