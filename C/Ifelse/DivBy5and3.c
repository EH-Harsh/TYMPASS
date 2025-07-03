#include<stdio.h>
int main(){
    int num;
    printf("Enter a Positive number:");
    scanf("%d",&num);
    if(num%5==0 && num%3==0){
        printf("%d is divible by 5 and 3 both",num);
    }else{
        printf("%d is not divisible by 3 and 5",num);
    }

    return 0;
}