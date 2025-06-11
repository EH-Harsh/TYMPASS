#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int even=0,odd=0;
    for(int i=0;i<5;i++){
        if(i%2==0){
            even= arr[i]+even;
        }else{
            odd= arr[i]+odd;
        }
    } 
    printf("Sum of even elements is %d\n",even);
    printf("Sum of odd elements is %d\n",odd);
    printf("Difference between sum of even and odd elements is %d\n",even-odd);
    return 0;
}