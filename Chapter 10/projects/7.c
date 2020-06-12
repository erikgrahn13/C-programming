#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10
#define DIGIT_WIDTH 3
#define DIGIT_SPACING 1

char digits[4][MAX_DIGITS * 4];
const int segemnts[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                             {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_array(void);

int main(void)
{
    int digit;
    int position = 0;
    clear_digits_array();
    printf("Enter a number: ");
    char ch;
    while ((ch = getchar()) != '\n' && position < MAX_DIGITS * 4)
    {
        if (isdigit(ch))
        {
            process_digit(ch - '0', position);
            position += (DIGIT_WIDTH + DIGIT_SPACING);
        }
    }

    print_array();

    return 0;
}

void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
        {
            digits[i][j] = ' ';
        }
    }
}
void process_digit(int digit, int position)
{
    digits[0][position + 1] = segemnts[digit][0] ? '_' : ' ';
    digits[1][position] = segemnts[digit][5] ? '!' : ' ';
    digits[1][position + 1] = segemnts[digit][6] ? '_' : ' ';
    digits[1][position + 2] = segemnts[digit][1] ? '!' : ' ';
    digits[2][position] = segemnts[digit][4] ? '!' : ' ';
    digits[2][position + 1] = segemnts[digit][3] ? '_' : ' ';
    digits[2][position + 2] = segemnts[digit][2] ? '!' : ' ';
}

void print_array(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
        {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}
// _
//! !
//!_!
//
//