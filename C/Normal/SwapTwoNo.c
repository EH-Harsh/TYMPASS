#include<stdio.h>
int main()
{
    int x,y,z;
    printf("first number:");
    scanf("%d",&x);
    printf("second number:");
    scanf("%d",&y);
    z=x,x=y,y=z;
    printf("now first number %d and second number is %d",x,y);

    return 0;
}