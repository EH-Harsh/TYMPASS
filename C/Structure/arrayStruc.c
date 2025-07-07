#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    typedef struct pokemon {
        char name[15];
        int hp;
        int speed;
        int attack;
        char tier;
        
    } pokemon;


    pokemon arr[10]; // Array of 10 pokemon structures

    strcpy(arr[0].name, "Pikachu");
    arr[0].hp = 35;
    arr[0].speed = 90;
    arr[0].attack = 55;
    arr[0].tier = 'B';
    
    strcpy(arr[1].name, "Charizard");
    arr[1].hp = 78;
    arr[1].speed = 100; 
    arr[1].attack = 84;
    arr[1].tier = 'A';
   
    strcpy(arr[2].name, "Gengar");
    arr[2].hp = 106;
    arr[2].speed = 130;
    arr[2].attack = 130;
    arr[2].tier = 'S';

    // Accessing and printing the pokemon array's members
    for (int i=0; i<3; i++) {
        printf("\n");
        printf("Pokemon Name: %s\n", arr[i].name);
        printf("HP: %d\n", arr[i].hp);
        printf("Speed: %d\n", arr[i].speed);
        printf("Attack: %d\n", arr[i].attack);
        printf("Tier: %c\n", arr[i].tier);
        printf("\n");
    }
    // You can add more pokemon to the array as needed
    // For example, you can add more pokemon like this:
    return 0;
}