#include<stdio.h>
int main(){
    int num;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    if(num>99 && num<1000){
        printf("%d is three digit number",num);
    }else{
        printf("%d is not three digit number",num);
    }


    return 0;
}