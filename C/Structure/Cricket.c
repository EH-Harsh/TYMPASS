#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Matches 5
#define Players 3   
typedef struct cricketer {
    char name[50];
    int age;
    int runs;
    int wickets;
} cricketer;


int main (){
    cricketer players [Players];

    //input player details
   for (int i=0; i<Players; i++) {
        printf("Enter details for player %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", players[i].name); // Read string with spaces
    // Using " %[^\n]" to read a line of text including spaces
        // This format specifier reads until a newline is encountered, allowing spaces in the name. 

        //another way to read a string with spaces is to use fgets
        // fgets(players[i].name, sizeof(players[i].name), stdin);
        // fgets reads a line from the standard input and stores it in players[i].name
        // It stops reading when it encounters a newline character or when the specified size is reached.

        printf("Age: ");
        scanf("%d", &players[i].age);
        printf("Runs: ");
        scanf("%d", &players[i].runs);
        printf("Wickets: ");
        scanf("%d", &players[i].wickets);
    }
    printf("\nCricketer Statistics:\n");
    printf("%-22s %-5s %-10s %-10s\n", "Name", "Age", "Runs", "Wickets");
    for (int i = 0; i < Players; i++) {
        printf("%-22s %-5d %-10d %-10d\n", players[i].name, players[i].age, players[i].runs, players[i].wickets);
    }   
    // The %-22s format specifier is used to left-align the string in a field of width 22 characters.
    // The %-5d format specifier is used to left-align the integer in a field of width 5 characters.
    // The %-10d format specifier is used to left-align the integer in a field of width 10 characters.
   

    return 0;
}