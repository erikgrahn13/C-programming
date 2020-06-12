#include <stdio.h>

int main(void)
{
    printf("Enter the numbers from 1 to 16 in any order: ");
    int nr1, nr2, nr3, nr4, nr5, nr6, nr7, nr8, nr9, nr10, nr11, nr12, nr13, nr14, nr15, nr16;

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &nr1, &nr2, &nr3, &nr4, &nr5, &nr6, &nr7, &nr8, &nr9, &nr10, &nr11, &nr12, &nr13, &nr14, &nr15, &nr16);

    printf("%2d %2d %2d %2d\n", nr1, nr2, nr3, nr4);
    printf("%2d %2d %2d %2d\n", nr5, nr6, nr7, nr8);
    printf("%2d %2d %2d %2d\n", nr9, nr10, nr11, nr12);
    printf("%2d %2d %2d %2d\n\n", nr13, nr14, nr15, nr16);

    int row1, row2, row3, row4;
    int column1, column2, column3, column4;
    int diagonal1, diagonal2;

    row1 = nr1 + nr2 + nr3 + nr4;
    row2 = nr5 + nr6 + nr7 + nr8;
    row3 = nr9 + nr10 + nr11 + nr12;
    row4 = nr13 + nr14 + nr15 + nr16;

    column1 = nr1 + nr5 + nr9 + nr13;
    column2 = nr2 + nr6 + nr10 + nr14;
    column3 = nr3 + nr7 + nr11 + nr15;
    column4 = nr4 + nr8 + nr12 + nr16;

    diagonal1 = nr1 + nr6 + nr11 + nr16;
    diagonal2 = nr13 + nr10 + nr7 + nr4;

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", column1, column2, column3, column4);
    printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);
    return 0;
}