#include<stdio.h>
int main(){
    int n;
    printf("Enter a no ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;i+j<=n;j++){
            printf("   ");
        }
        for(int k=1;k<=i;k++){
            printf(" * ");
        }
        printf("\n");
    }
}  