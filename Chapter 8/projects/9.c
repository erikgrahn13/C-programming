#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    srand(time(NULL));
    int number;
    int row = 0;
    int column = 0;
    char letter = 'A';
    bool blocked[4] = {false};

    char random_walk_array[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            random_walk_array[i][j] = '.';
        }
    }
    random_walk_array[row][column] = letter;

    while (letter < 'Z')
    {
        number = rand() % 4;

        if (blocked[0] && blocked[1] && blocked[2] && blocked[3])
        {
            break;
        }

        if (number == 0)
        {
            if (row > 0 && random_walk_array[row - 1][column] == '.')
            {
                row--;
            }
            else
            {
                blocked[0] = true;
                continue;
            }
        }
        else if (number == 1)
        {
            if (column < 9 && random_walk_array[row][column + 1] == '.')
            {
                column++;
            }
            else
            {
                blocked[1] = true;
                continue;
            }
        }
        else if (number == 2)
        {
            if (row < 9 && random_walk_array[row + 1][column] == '.')
            {
                row++;
            }
            else
            {
                blocked[2] = true;
                continue;
            }
        }
        else if (number == 3)
        {
            if (column > 0 && random_walk_array[row][column - 1] == '.')
            {
                column--;
            }
            else
            {
                blocked[3] = true;
                continue;
            }
        }
        else
        {
            continue;
        }

        random_walk_array[row][column] = ++letter;
        blocked[0] = false;
        blocked[1] = false;
        blocked[2] = false;
        blocked[3] = false;
    }

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", random_walk_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}