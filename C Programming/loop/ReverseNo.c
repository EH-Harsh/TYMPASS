#include<stdio.h>
int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reverse=0;
    int lastDigit=0;
    while(n!=0){
        lastDigit=n%10;
        reverse=lastDigit+reverse*10;
        n=n/10;
    }
    printf("The reverse of the number is %d", reverse);


    return 0;
}