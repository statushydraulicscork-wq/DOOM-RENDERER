#include <stdio.h>
#include "include/format.h"

typedef struct 
{
    char name[16];
    int score;
} Player;

Player player1;

int main(){
    Player *user =& player1;
    printf("What is your score? ");
    scanf("%d",&user->score);

    printf("\nScore : %d \n\n",user->score);
    
    printf("Length of 11 : %d",len("11"));
    return(0);
}