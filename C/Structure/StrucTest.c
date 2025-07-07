#include<stdio.h>
int main (){
    //declaration of structure
    struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
    };



    //alternative way to declare structure   
     /*struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    }pikachu, charizard;   // can also be declared here*/
    
    
    //initialization of structure
    struct pokemon pikachu = {35, 90, 55, 'B'};
    struct pokemon charizard = {78, 100, 84, 'A'};

    //accessing structure members
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

    return 0;

}