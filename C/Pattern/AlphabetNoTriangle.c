#include<stdio.h>
int main(){
    int row;
    printf("enter a row: ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++){
        if(i%2==0){ 
        int a=65;
        for(int j=1; j<=i; j++){
            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
    }else{ 
        for(int j=1; j<=i; j++){
            printf("%d ",j);
        }
    }
        printf("\n");
    
    }
}