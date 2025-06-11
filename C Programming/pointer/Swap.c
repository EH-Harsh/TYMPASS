#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a= *b ;
    *b=temp;
    return;
}

int main (){
    int x = 4, y = 5;
    printf("The value of x is %d and the value of y is %d\n", x, y);
    swap(&x, &y);
    printf("The value of x is %d and the value of y is %d\n", x, y);
    return 0;
}