#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void generate_random_walk(char walk[10][10])
{
    int row = 0;
    int column = 0;
    char letter = 'A';
    int number;
    bool blocked[4] = {false};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            walk[i][j] = '.';
        }
    }
    walk[row][column] = letter;

    while (letter < 'Z')
    {
        number = rand() % 4;

        if (blocked[0] && blocked[1] && blocked[2] && blocked[3])
        {
            break;
        }

        if (number == 0)
        {
            if (row > 0 && walk[row - 1][column] == '.')
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
            if (column < 9 && walk[row][column + 1] == '.')
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
            if (row < 9 && walk[row + 1][column] == '.')
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
            if (column > 0 && walk[row][column - 1] == '.')
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

        walk[row][column] = ++letter;
        blocked[0] = false;
        blocked[1] = false;
        blocked[2] = false;
        blocked[3] = false;
    }
}

void print_array(char walk[10][10])
{
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    srand(time(NULL));

    char random_walk_array[10][10];
    generate_random_walk(random_walk_array);
    print_array(random_walk_array);

    return 0;
}