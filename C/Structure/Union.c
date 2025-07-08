#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
#define Players 3




//difference between struct and union// A struct allocates memory for each member, while a union allocates memory for the largest member
// A struct can hold multiple values simultaneously, while a union can hold only one value at a time.
// A struct is used to group related data together, while a union is used to save memory    
typedef union cricketer {
    char name[50];
    int age;
    int runs;
    int wickets;
} cricketer;
int main() {
    cricketer players[Players];
    
    // Input player details
    for (int i = 0; i < Players; i++) {
        printf("Enter details for player %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", players[i].name); // Read string with spaces
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

    return 0;
}