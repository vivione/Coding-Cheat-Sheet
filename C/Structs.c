#include <stdio.h>
#include <string.h>

struct Player {
    char name[12];
    int score;
};

int main() {

    // Stucts are a collection of related members ("varibales")
    // They can be of different data types
    // Listed under one name in a block of memory
    // Verry similar to classes in other languages (but no methotds)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bro");
    player1.score = 4;

    strcpy(player2.name, "Bra");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);
    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}