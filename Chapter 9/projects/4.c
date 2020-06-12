#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARRAY_SIZE 26

void read_word(int counts[26])
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            counts[ch - 'a'] += 1;
        }
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (counts1[i] != counts2[i])
        {
            return false;
        }
    }
    return true;
}

int main(void)
{

    int first_word[ARRAY_SIZE] = {0};
    int second_word[ARRAY_SIZE] = {0};

    printf("Enter first word: ");
    read_word(first_word);

    printf("Enter second word: ");
    read_word(second_word);

    if (equal_array(first_word, second_word))
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }

    return 0;
}