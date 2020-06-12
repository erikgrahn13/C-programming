#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter a word: ");

    char ch;
    int scrabble_value = 0;
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U')
        {
            scrabble_value += 1;
        }
        else if (ch == 'D' || ch == 'G')
        {
            scrabble_value += 2;
        }
        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
        {
            scrabble_value += 3;
        }
        else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
        {
            scrabble_value += 4;
        }
        else if (ch == 'K')
        {
            scrabble_value += 5;
        }
        else if (ch == 'J' || ch == 'X')
        {
            scrabble_value += 8;
        }
        else if (ch == 'Q' || ch == 'Z')
        {
            scrabble_value += 10;
        }
    }

    printf("Scrabble value: %d\n", scrabble_value);

    return 0;
}