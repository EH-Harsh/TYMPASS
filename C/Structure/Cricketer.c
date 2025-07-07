#include<stdio.h>
#include<string.h>
#define Matches 5
#define Players 3
typedef struct cricketer {
    char name[50];
    int age;
    int runs;
    int wickets;
} cricketer;
int main() {
    cricketer players[Players] = {
        {"Sachin Tendulkar", 47, 18426, 46},
        {"Virat Kohli", 34, 12345, 4},
        {"MS Dhoni", 41, 10773, 0}
    };

    printf("Cricketer Statistics:\n");
    printf("%-22s %-5s %-10s %-10s\n", "Name", "Age", "Runs", "Wickets");
    for (int i = 0; i < Players; i++) {
        printf("%-22s %-5d %-10d %-10d\n", players[i].name, players[i].age, players[i].runs, players[i].wickets);
    }

    return 0;
}