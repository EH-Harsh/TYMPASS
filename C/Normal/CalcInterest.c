#include<stdio.h>
int main ()
{
    int Principal, Time, Rate;
    
    printf("Principal:\t");
    scanf("%d",&Principal);

    printf("Time:\t");
    scanf("%d",&Time);

    printf("Rate:\t");
    scanf("%d", &Rate);

    int Interest = Principal * Time * Rate / 100;
    printf("Interest:\t%d",Interest);

    return 0;
}