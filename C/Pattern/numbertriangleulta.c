#include<stdio.h>
int main(){
    int row;
    printf("enter a row: ");
    scanf("%d",&row);
    int a=row;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=a; j++){
            printf("%d ",j);
        }a--;
        printf("\n");
    
    }
}