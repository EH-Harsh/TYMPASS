#include<stdio.h>
void sum(int n, int s){
    if(n==0){
        printf("Sum of 1 to n is: %d", s);
        return ;
    }
    sum(n-1, s+n);
    return;
}
int main(){
    int n ;
    printf("Enter the number: ");
    scanf("%d", &n);
    sum(n,0);
}