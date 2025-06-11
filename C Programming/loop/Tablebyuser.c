#include<stdio.h>
int main (){
    int table;
    printf("Enter which Table: ");
    scanf("%d",&table);
    for(int i=1;i<=10;i++){
        int n=table*i;
        printf("%d\n",n);
    }
    return 0;
}