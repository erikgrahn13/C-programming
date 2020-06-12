#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARRAY_SIZE 26

bool are_anagrams(const char *word1, const char *word2)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (word1[i] != word2[i])
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    char ch;
    char first_word[ARRAY_SIZE] = {0};
    char second_word[ARRAY_SIZE] = {0};

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

    if (are_anagrams(first_word, second_word))
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }

    return 0;
}