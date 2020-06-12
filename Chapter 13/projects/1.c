#include <stdio.h>
#include <string.h>

#define WORD_LENGTH 20

int main(void)
{

    char word[WORD_LENGTH];
    char smallest_word[WORD_LENGTH];
    char largest_word[WORD_LENGTH];

    printf("Enter word: ");
    scanf("%s", word);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);

    while(strlen(word) != 4)
    {
        printf("Enter word: ");
        scanf("%s", word);
        
        if(strcmp(word, smallest_word) < 0)
        {
            strcpy(smallest_word, word);
        }
        else if(strcmp(word, largest_word) > 0)
        {
            strcpy(largest_word, word);
        }

    }

    printf("\nSmallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}