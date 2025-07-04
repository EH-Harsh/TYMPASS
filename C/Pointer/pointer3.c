#include<stdio.h>
int main(){
    int a = 5;
    int* x=&a;
    int** y=&x;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *x);
    printf("The value of a is %d\n", **y);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", x);
    printf("The address of a is %p\n", *y);
    printf("The address of x is %p\n", &x);
    printf("The address of x is %p\n", y);
    
    return 0;
}