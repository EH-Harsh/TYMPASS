#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("now Enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}