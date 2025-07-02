#include<stdio.h>
int power(int a , int b){
    int x=1;
    for(int i=1;i<=b;i++){
        x*=a;
    }
    return x;
}


//if(b==0) return 1;
//return a*power(a,b-1);
int main(){
    int a, b;
    printf("Enter the number and its power: ");
    scanf("%d%d",&a ,&b);
    printf("The power of %d to %d is: %d", a, b, power(a,b));
    return 0;
}