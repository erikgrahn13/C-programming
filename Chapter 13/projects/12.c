#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 50
#define MAX_WORD_LENGTH 20
#define MAX_SENTENCE_LENGTH 30

int main(void)
{
    char ch;
    char words[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH];
    char special_character[2];
    int row = 0;
    int column = 0;
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n' && row < MAX_SENTENCE_LENGTH && column < MAX_WORD_LENGTH)
    {
        if (ch == '.' || ch == '?' || ch == '!')
        {
            special_character[0] = (char)ch;
            special_character[1] = '\0';
            break;
        }
        else if (ch == ' ')
        {
            words[row][column] = '\0';
            column = 0;
            row++;
        }
        else
        {
            words[row][column] = ch;
            column++;
        }
    }

    for (int i = row; i >= 0; i--)
    {
        if (i == 0)
        {
            strcat(words[i], special_character);
        }
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}