#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    // Define a structure to hold student information
    struct Student {
        char name[50];
        int age;
        float gpa;
    };

    // Create an instance of the Student structure
    struct Student student1;

    // Assign values to the fields of the structure
    strcpy(student1.name, "naman");
    student1.age = 20;
    student1.gpa = 3.5;

    // Print the student's information
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);

    return 0;
}