#include<stdio.h>
void increasing(int n){
    if(n==0) return;
    else
    {
        
        increasing(n-1);
        printf("%d\n",n);
        return ;
    }

}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    increasing(n);
    return 0;
}