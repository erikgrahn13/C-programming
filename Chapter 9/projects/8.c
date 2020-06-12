#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void)
{
    int dice1;
    int dice2;
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;

    return dice1 + dice2;
}

bool play_game(void)
{
    int point = roll_dice();
    printf("You rolled: %d\n", point);
    if (point == 11 || point == 7)
    {
        return true;
    }
    else if (point == 2 || point == 3 || point == 12)
    {
        return false;
    }

    printf("Your point is %d\n", point);

    while (true)
    {
        int roll = roll_dice();
        printf("You rolled %d\n", roll);
        if (roll == point)
        {
            return true;
        }
        else if (roll == 7)
        {
            return false;
        }
    }
}

int main(void)
{
    srand(time(NULL));
    char game = 'y';
    int wins = 0;
    int losses = 0;

    while (game == 'y')
    {

        if (play_game())
        {
            printf("You win!\n\n");
            wins++;
        }
        else
        {
            printf("You lose!\n\n");
            losses++;
        }
        printf("Play again? ");
        game = getchar();
        getchar();
        game = tolower(game);
        printf("\n");
    }

    printf("Wins: %d  Losses: %d\n", wins, losses);

    return 0;
}