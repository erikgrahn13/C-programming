#include <stdio.h>

int evaluate_position(char board[8][8])
{
    int white_value = 0;
    int black_value = 0;

    char *p;
    int i = 0;
    for (p = (char *)board; p < (char *)board + 8 * 8; p++)
    {
        printf("%d ", i++);
        switch (*p)
        {
        case 'Q':
            white_value += 9;
            break;
        case 'R':
            white_value += 5;
            break;
        case 'B':
            white_value += 3;
            break;
        case 'N':
            white_value += 3;
            break;
        case 'P':
            white_value += 1;
            break;

        case 'q':
            black_value += 9;
            break;
        case 'r':
            black_value += 5;
            break;
        case 'b':
            black_value += 3;
            break;
        case 'n':
            black_value += 3;
            break;
        case 'p':
            black_value += 1;
            break;

        default:
            break;
        }
    }

    return white_value - black_value;
}

int main(void)
{
    char myArray[8][8];
    int count = 0;

    myArray[0][0] = 'q';
    myArray[0][1] = 'R';

    printf("%d\n", evaluate_position(myArray));

    return 0;
}