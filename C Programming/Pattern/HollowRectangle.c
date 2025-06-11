#include<stdio.h>
int main(){
    int row,column;
    printf("Enter a no of row: ");
    scanf("%d",&row);
    printf("Enter a no of column: ");
    scanf("%d",&column);
    for(int i=1; i<=row;i++){
        for(int j=1;j<=column;j++){
        
            if( i==row || j==column || i==1 || j==1)
            printf(" * ");
            else printf("   ");  
        }
        printf("\n");
    }
}