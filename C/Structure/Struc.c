#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    
    };
    struct pokemon pikachu;
    pikachu.hp = 35;
    pikachu.speed = 90; 
    pikachu.attack = 55;
    pikachu.tier = 'B';
    printf("Pikachu's stats:\n");
    printf("HP: %d\n", pikachu.hp);
    printf("Speed: %d\n", pikachu.speed);
    printf("Attack: %d\n", pikachu.attack);
    printf("Tier: %c\n", pikachu.tier);
    printf("\n");
    struct pokemon charizard;
    charizard.hp = 78;  
    charizard.speed = 100;
    charizard.attack = 84;
    charizard.tier = 'A';
    printf("Charizard's stats:\n");
    printf("HP: %d\n", charizard.hp);
    printf("Speed: %d\n", charizard.speed);
    printf("Attack: %d\n", charizard.attack);
    printf("Tier: %c\n", charizard.tier);   




    return 0;
}