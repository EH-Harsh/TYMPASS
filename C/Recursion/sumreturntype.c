#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return n;
    int add =n+ sum(n-1);
    return add;
}
int main(){
    int n ;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Sum of 1 to n is: %d", sum(n));
    return 0;
}