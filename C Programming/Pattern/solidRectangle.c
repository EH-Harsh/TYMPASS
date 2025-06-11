#include<stdio.h>
int main(){
    int row,column;
    printf("Enter a Row: ");
    scanf("%d",&row);   
    printf("Enter a Column: ");     
    scanf("%d",&column);
    for(int i=1;i<=row;i++){
        for(int i=1;i<=column;i++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}