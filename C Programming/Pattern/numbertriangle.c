#include<stdio.h>
int main(){
    int row;
    printf("enter a row: ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    
    }
}