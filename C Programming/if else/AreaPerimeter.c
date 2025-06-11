#include<stdio.h>
int main (){
    int length,breadth,area,perimeter;
    printf("Enter a Length: ");
    scanf("%f",&length);
    printf("Enter a Breadth: ");
    scanf("%f",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter){
        printf("Area of Rectangle is Greater than perimeter ");
    }
    if(perimeter>area){
        printf("Perimeter of Rectangle is Greater than area ");
    }else{
        printf("area of rectangle and area of  perimeter both are equal ");
    }


    return 0;
}