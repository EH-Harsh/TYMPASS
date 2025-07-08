#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
typedef struct Student {
    char name[50];
    int age;
    float gpa;
} Student;
void displayStudent(Student *s) {
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("GPA: %.2f\n", s->gpa);
}
int main() {
    Student s1 = {"Error", 20, 3.5};
    Student s2 = {"Esa", 22, 3.8};
    Student s3 = {"Echo", 21, 3.6};

    printf("Student 1 Details:\n");
    displayStudent(&s1);
    printf("\n");

    printf("Student 2 Details:\n");
    displayStudent(&s2);
    printf("\n");

    printf("Student 3 Details:\n");
    displayStudent(&s3);
    printf("\n");

    return 0;
}