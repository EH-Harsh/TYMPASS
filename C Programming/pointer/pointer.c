#include<stdio.h>
int main(){
    int a = 5;
    int b = 5;
    int *ptra = &a; //pointer variable
    //pointer variable stores the address of another variable
    //& is used to get the address of a variable
    // * is used to store the value of the address of a variable
    printf("The value of a is %d\n", a); //print value of a
    printf("The address of a is %p\n", &a); //print address of a 
    printf("The address of b is %p\n", &b); //print address of a
    printf("The value of a is %d\n", *ptra); //*ptr it print the value of the variable whose address it store 
    //which means a value of a is 5
    printf("The address of a is %p\n", ptra);  // if we print only ptr then it give us a address of a
    printf("The address of ptra is %p\n", &ptra); // it give addreas of ptra
    return 0;

    //%p se address print hota hai (&) use karke 
    //%d se value print hoti hai

} 