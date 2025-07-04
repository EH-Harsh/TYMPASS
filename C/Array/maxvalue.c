#include<stdio.h>
int main(){
int arr[8]={9,2,11,13,3,4,7,8};
int max=arr[0];
for(int i=1;i<8;i++){
    if(max<arr[i]){
        max=arr[i];
        
    }else{
        continue ;
    }
    
}printf("Max value is %d\n",max);
return 0;
} 