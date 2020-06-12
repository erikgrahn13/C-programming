#include <stdio.h>

int main(void)
{
    int number[5][5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &number[i][0], &number[i][1], &number[i][2], &number[i][3], &number[i][4]);
    }

    printf("Row totals: ");
    int row = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            row += number[i][j];
        }
        printf("%d ", row);
        row = 0;
    }

    printf("\nColumn totals: ");
    int column = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            column += number[j][i];
        }
        printf("%d ", column);
        column = 0;
    }
    printf("\n");

    return 0;
}