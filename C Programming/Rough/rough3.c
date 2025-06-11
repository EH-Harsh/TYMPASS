#include<stdio.h>
int main(){
    int a,n,r;
    printf("Enter a first number: ");
    scanf("%d",&a);
    printf("Enter a difference: ");
    scanf("%d",&r);
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*r;
    }
    return 0;
}