#include <stdio.h>

#define ARRAY_SIZE 50

int main(void)
{
    char ch;
    char sentence[ARRAY_SIZE];
    char special_character;
    int counter = 0;
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n' && counter < ARRAY_SIZE)
    {
        if (ch == '.' || ch == '?' || ch == '!')
        {
            special_character = ch;
            break;
        }

        sentence[counter++] = ch;
    }

    for (int i = counter; i >= 0; i--)
    {
        if (i == 0)
        {
            char j = i;
            while ((sentence[j] != ' ') && j < counter)
            {
                putchar(sentence[j++]);
            }
        }
        else if (sentence[i] == ' ')
        {
            char j;

            j = i + 1;

            while ((sentence[j] != ' ') && j < counter)
            {
                putchar(sentence[j++]);
            }
            putchar(' ');

            // while (j != ' ' && j < counter)
            // {
            //     printf("%c", sentence[j++]);
            // }
            // printf(" ");
        }
    }
    printf("%c\n", special_character);

    return 0;
}