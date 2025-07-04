#include<stdio.h>
int main(){
int arr[7]={1,2,3,4,5,6,7};
for(int i=0;i<7;i++){
    if(i%2==0){ 
        //why we not use arr[i] --> i 
        // because i is index arr[i] is value
        arr[i]=arr[i]+10;
        
    }else{
        arr[i]=arr[i]*2;
        
    }
}
    for(int i=0;i<7;i++)
        printf("%d ",arr[i]);
return 0;
}