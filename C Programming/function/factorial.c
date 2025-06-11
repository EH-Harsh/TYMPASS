#include<stdio.h>
void factorial(int a){
    int fact =1;
    for (int i=1; i<=a; i++){
        fact = fact*i;

    }
    printf("The factorial of %d is %d\n", a, fact);
}

int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);    
    factorial(a);
    
    return 0;
}