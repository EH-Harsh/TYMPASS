#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
int main (){

    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5}; 
    int k=11; // tht is a specific target no to find sum of two elements in array
    int n = 10; // Size of the array excluding the duplicate




    // all pairs of elements in the array
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
}