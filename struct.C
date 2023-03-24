#include <stdio.h>
#include <string.h>

typedef struct {
    //和class非常類似，但不能訂methods
    char name[12];
    int score;
}player; //struct結尾要加分號

int main(){
    player player1;
    player player2;

    strcpy(player1.name, "Andy");
    strcpy(player2.name, "Bob");

    player1.score=100;
    player2.score=150;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);


    return 0;
}