#include<stdio.h>
int main(){
    int row;
    printf("enter a row: ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++){
        int a=65;
        for(int j=1; j<=row; j++){
            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    
    }
}