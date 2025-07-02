#include<stdio.h>
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    int combination;
    combination=fact(n)/(fact(r)*fact(n-r));
    printf("The value of %dC%d is %d\n",n,r,combination);
    return 0;
}