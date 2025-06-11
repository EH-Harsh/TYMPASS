#include<stdio.h>
int main(){
    int arr[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    for(int i=0;i<10;i++){
        if(arr[i]<35){
            printf("Marks less than 35 whose roll no. is: %d\n",i);
        }
    }
    return 0;
} 