#include<stdio.h>
int main(){
    int i=10;
   /* while(i<10){ //code is not work with while loop 
        printf("Hello"); //but in dowhile loop code will work
        i++;
    }*/
   do{
    printf("Hello");
    i++; // now code run at once and then check the condition
   }
   while(i<10);
    return 0;
}