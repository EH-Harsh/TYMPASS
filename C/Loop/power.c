#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    int result=1;
    for(int i=1;i<=b;i++){
        result=result*a;
        printf("The %d result is %d\n",i, result);
    }
    printf("The result is %d", result);
    return 0; 
}