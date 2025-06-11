#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp=n;
    int rev = 0;
    int lastDigit=0;
    while(n!=0){
        lastDigit=n%10;
        rev=lastDigit+rev*10;
        n=n/10;
    }
    int sum=temp+rev;
    printf("The sum of the number and its reverse is %d",sum);
    return 0;
}