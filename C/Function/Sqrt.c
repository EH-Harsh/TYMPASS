#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    float sq = sqrt(a);
    printf("The square root of %d is %f\n",a,sq);
    return 0;
}