#include<stdio.h>
int main(){
    int num;
    printf("Enter a positive number:");
    scanf("%d", &num);
    if(num%5==0){
        printf("%d is divisible by 5", num);
    }else{
        printf("%d is not divisible by 5", num);
    }
    return 0;
}