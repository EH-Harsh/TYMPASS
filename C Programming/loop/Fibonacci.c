#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1; i<=n; i++){
        
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The %dth term of the fibonacci series is %d", n, sum);
     
    return 0;
}


/*#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    for (int i = 1; i <= n; i++) {
        printf("%d: %d\n", i, a);
        int sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}*/