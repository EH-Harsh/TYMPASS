#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon {
    char name[50];
    int level;
    int health;
    char type[20];
} Pokemon;
void displayPokemon(Pokemon p) {
    printf("Name: %s\n", p.name);
    printf("Level: %d\n", p.level);
    printf("Health: %d\n", p.health);
    printf("Type: %s\n", p.type);
}
int main() {
    Pokemon pikachu = {"Pikachu", 25, 100, "Electric"};
    Pokemon charmander = {"Charmander", 20, 80, "Fire"};
    Pokemon bulbasaur = {"Bulbasaur", 18, 90, "Grass"};

    printf("Pokemon Details:\n");
    displayPokemon(pikachu);
    printf("\n");
    displayPokemon(charmander);
    printf("\n");
    displayPokemon(bulbasaur);

    return 0;
}
