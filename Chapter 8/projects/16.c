#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define ARRAY_SIZE 26

int main(void)
{
    char ch;
    int first_word[ARRAY_SIZE] = {0};
    int second_word[ARRAY_SIZE] = {0};

    printf("Enter first word: ");

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            first_word[ch - 'a'] += 1;
        }
    }

    printf("Enter second word: ");

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            second_word[ch - 'a'] += 1;
        }
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (first_word[i] != second_word[i])
        {
            printf("The words are not anagrams.\n");
            exit(0);
        }
    }

    printf("The words are anagrams.\n");
    return 0;
}