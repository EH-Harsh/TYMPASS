#include<stdio.h>
int sum(int x , int y){
    return x+y;
}
int main(){
    int a;
    printf("Enter the first number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the second number: ");
    scanf("%d",&b);
    int add = sum(a,b);
    printf("The sum of %d and %d is %d\n",a,b,add);
    return 0;
}