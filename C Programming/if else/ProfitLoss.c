#include<stdio.h>
int main (){
    int cp,sp;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("Enter sell price: ");
    scanf("%f",&sp);
    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("loss");
    }else{
        printf("no profit no loss");
    }
    
    return 0;
}