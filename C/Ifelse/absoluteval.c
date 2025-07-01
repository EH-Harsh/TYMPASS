#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0){
        num=(-1)*num;
    }
    printf("The absolute value of the number is %d",num);

     return 0;
}