#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%2==0){
            a=1;
            break;
        }
    }
    if(n==1){
        printf("1 is neither prime nor composite");
    }else if(a==0){
        printf("The given number is prime");
    }else{
        printf("The given number is composite");
    }

    return 0;
} 