#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first numbers: ");
    scanf("%d ",&a);
    printf("Enter second numbers: ");
    scanf("%d ",&b); 
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping first number is: %d\n",a);
    printf("After swapping second number is: %d\n",b);
    return 0;
}