#include<stdio.h>
#include<string.h>
int main (){
typedef struct Book{
    char title[50];
    char author[50];
    int year;
    float price;
}Book;
// Declaration of a Book variable
Book book1;

// Initialization of the Book variable
strcpy(book1.title, "The Great Gatsby");
strcpy(book1.author, "F. Scott Fitzgerald");
book1.year = 1925;
book1.price = 10.99;
// Accessing and printing the Book variable's members
printf("\n");
printf("Book Title: %s\n", book1.title);
printf("Book Author: %s\n", book1.author);
printf("Publication Year: %d\n", book1.year);
printf("Book Price: %.2f\n", book1.price);
printf("\n");


//another way to declare and initialize a Book variable


Book book2 = {"1984", "George Orwell", 1949, 8.99};
// Accessing and printing the second Book variable's members
printf("Book Title: %s\n", book2.title);
printf("Book Author: %s\n", book2.author);
printf("Publication Year: %d\n", book2.year);
printf("Book Price: %.2f\n", book2.price);

    return 0;
}