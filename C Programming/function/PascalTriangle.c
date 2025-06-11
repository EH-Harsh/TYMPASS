#include<stdio.h>
int fact(int n){
    int factorial=1;
    for(int i=2; i<=n; i++){
        factorial=factorial*i;
    }
    return factorial;
}
int combination(int a, int b){
    int ncr=fact(a)/(fact(b)*fact(a-b));
    return ncr;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}