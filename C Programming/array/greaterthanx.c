#include<stdio.h>
int main(){
int arr[5]={1,2,9,6,5};
int x=4;
int count=0;
for(int i=0;i<5;i++){
    if(arr[i]>x){
        count++;
    }
} printf("Number of elements greater than %d is %d\n",x,count);
    return 0;
}