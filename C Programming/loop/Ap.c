/*#include<stdio.h>
int main(){
    int a=1,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
       
        printf("%d ",a);
        a=a+2;
    }
       
    
    return 0;
}*/

#include<stdio.h>
int main(){
    int a,n,d;
    printf("Enter a first number: ");
    scanf("%d",&a);
    printf("Enter a difference: ");
    scanf("%d",&d);
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+d;
    }
    return 0;
}