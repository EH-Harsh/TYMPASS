#include<stdio.h>
int main (){
    int a =2;
    printf("The value of a is %d\n", a);
    int *x=&a;
    *x=6;
    printf("The new value of a is %d\n", *x);
    printf("The address of a is %u\n", &a);
    printf("The address of x is %u\n", &x);
    printf("The value of x is %u\n", x);

    return 0;
}