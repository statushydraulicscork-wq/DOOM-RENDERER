#include <stdio.h>


typedef struct 
{
    char name[16];
    int score;
} Player;

Player player1;

int main(){
    Player *user = &player1;

    user->score = 5;

    scanf("%d",&user->score);
    printf("Score : %d",user->score);

    return(0);
}