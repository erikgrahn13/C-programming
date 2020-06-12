#include <stdio.h>

int main(void)
{
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    int n;
    scanf("%d", &n);

    int magic_square[n][n];
    int row = 0;
    int nextRow = 0;
    int column = n / 2;
    int nextColumn = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            magic_square[i][j] = 0;
        }
    }

    magic_square[row][column] = 1;

    for (int i = 2; i <= n * n; i++)
    {
        if (row == 0)
        {
            nextRow = n - 1;
        }
        else
        {
            nextRow = row - 1;
        }

        if (column == n - 1)
        {
            nextColumn = 0;
        }
        else
        {
            nextColumn = column + 1;
        }

        if (magic_square[nextRow][nextColumn] != 0)
        {
            row++;
        }
        else
        {
            row = nextRow;
            column = nextColumn;
        }

        magic_square[row][column] = i;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}