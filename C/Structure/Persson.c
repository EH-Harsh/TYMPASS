#include<stdio.h>
int main (){
    typedef struct person{
        char name[50];
        int age;
        int salary;
        float height;
    }person ;


    // Declaration of a person variable
    person Boy = {"Harsh", 22, 50000, 5.6};
    person Girl ={"Esha", 23, 45000, 5.3};
    




    // Accessing and printing the person variable's members
    printf("\n");
    printf("Person Name: %s\n", Boy.name);
    printf("Person Age: %d\n", Boy.age);
    printf("Person Salary: %d\n", Boy.salary);
    printf("Person Height: %.1f\n", Boy.height);              

    printf("\n");
    printf("Person Name: %s\n", Girl.name);
    printf("Person Age: %d\n", Girl.age);
    printf("Person Salary: %d\n", Girl.salary);
    printf("Person Height: %.1f\n", Girl.height);





    return 0;
}
    
