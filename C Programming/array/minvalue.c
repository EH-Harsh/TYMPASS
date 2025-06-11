#include<stdio.h>
int main(){
int arr[8]={9,2,11,13,3,4,7,8};
int min=arr[0];
for(int i=1;i<8;i++){
    if(min>arr[i]){
        min=arr[i];
        
    }else{
        continue ;
    }
    
}printf("Max value is %d\n",min);
return 0;
} 