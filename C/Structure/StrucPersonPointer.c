#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Person {
    char name[50];
    int age;
    float height;
} Person;   
void displayPerson(Person *p) {
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Height: %.2f\n", p->height);
}
int main() {
    Person person1 = {"Echo", 22, 5.6};
    Person person2 = {"Error", 21, 5.4};
    Person person3 = {"Esa", 28, 5.3};

    printf("Person 1 Details:\n");
    displayPerson(&person1);
    printf("\n");

    printf("Person 2 Details:\n");
    displayPerson(&person2);
    printf("\n");

    printf("Person 3 Details:\n");
    displayPerson(&person3);
    printf("\n");

    return 0;
}