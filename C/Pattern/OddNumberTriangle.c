#include<stdio.h>
int main(){
    int row;
    printf("enter a row: ");
    scanf("%d",&row);


    for(int i=1; i<=row; i++){
        int a=1;
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    
    }
}