/*#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    int n;
    float a,r;
    printf("Enter a first number: ");
    scanf("%f",&a);
    printf("Enter a difference: ");
    scanf("%f",&r);
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a=a*r;
    }
    return 0;
}