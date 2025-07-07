#include<stdio.h>
#include<string.h>
int main (){
    typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;

    typedef struct legendarypokemon {
        int specialpower;
        pokemon x ; // Nested structure
    } legendarypokemon;


    // first we declare a normal pokemon variable
    pokemon pikachu = {35, 90, 55, 'B'};

    // another way to declare a noraml pokemon variable
    pokemon charizard;
    charizard.hp = 78;
    charizard.speed = 100;      
    charizard.attack = 84;
    charizard.tier = 'A';   
    // Accessing and printing the pokemon variable's members
    printf("Pikachu's stats:\n");   
    printf("HP: %d\n", pikachu.hp);
    printf("Speed: %d\n", pikachu.speed);   
    printf("Attack: %d\n", pikachu.attack);
    printf("Tier: %c\n", pikachu.tier);
    printf("\n");
    printf("Charizard's stats:\n");
    printf("HP: %d\n", charizard.hp);
    printf("Speed: %d\n", charizard.speed);
    printf("Attack: %d\n", charizard.attack);
    printf("Tier: %c\n", charizard.tier);
    printf("\n");
    
    // Now we declare a legendarypokemon variable
    legendarypokemon mewtwo = {150, {106, 130, 154, 'S'}};

    // another way to declare a legendarypokemon variable
    legendarypokemon rayquaza;
    rayquaza.specialpower = 150;
    rayquaza.x.hp = 105;
    rayquaza.x.speed = 115;
    rayquaza.x.attack = 150;    
    rayquaza.x.tier = 'S';
    // Accessing and printing the legendarypokemon variable's members
    printf("Mewtwo's stats:\n");
    printf("Special Power: %d\n", mewtwo.specialpower);
    printf("HP: %d\n", mewtwo.x.hp);
    printf("Speed: %d\n", mewtwo.x.speed);
    printf("Attack: %d\n", mewtwo.x.attack);
    printf("Tier: %c\n", mewtwo.x.tier);
    printf("\n");
    printf("Rayquaza's stats:\n");
    printf("Special Power: %d\n", rayquaza.specialpower);
    printf("HP: %d\n", rayquaza.x.hp);
    printf("Speed: %d\n", rayquaza.x.speed);
    printf("Attack: %d\n", rayquaza.x.attack);
    printf("Tier: %c\n", rayquaza.x.tier);

    return 0;
}