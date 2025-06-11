#include<stdio.h>
int main(){
    int n;
    printf("Armstrong numbers between 1 to 500 are:\n");        
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int sum=0;
        int temp=i;
        while(temp>0){
            int rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
  

    }
    return 0;
}