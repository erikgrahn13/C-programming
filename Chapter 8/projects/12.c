#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int scrabble_array[26] = {
        1, 3,  // A B
        3, 2,  // C D
        1, 4,  // E F
        2, 4,  // G H
        1, 8,  // I J
        5, 1,  // K L
        3, 1,  // M N
        1, 3,  // O P
        10, 1, // Q R
        1, 1,  // S T
        1, 4,  // U V
        4, 8,  // W X
        4, 10, //Y Z
    };

    printf("Enter a word: ");

    char ch;
    int scrabble_value = 0;
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        scrabble_value += scrabble_array[ch - 'A'];
    }

    printf("Scrabble value: %d\n", scrabble_value);

    return 0;
}