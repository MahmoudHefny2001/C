#include <stdio.h>
#include <string.h>

//  struct = collection of related members ("variables")
//           they can be of different data types 
//           listed under one name in a block of memory 
//           VERY SIMILAR to classes in other languages (but no methods)


struct Player {
    char name[30];
    int score;
};


int main(){

    struct Player player1;
    struct Player player2;
    
    strcpy(player1.name, "Hefny");
    player1.score = 5;

    strcpy(player2.name, "Aly");
    player2.score = 3;
    

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}