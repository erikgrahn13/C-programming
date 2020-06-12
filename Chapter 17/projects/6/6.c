#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 20
#define MAX_WORDS 50

int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

void print(char *words[], int n)
{
    printf("In sorted order: ");
    for(int i = 0; i < n; i++)
    {
        printf("%s ", words[i]);
    }
    printf("\n");

}

int compare(const void *a, const void *b)
{
    return strcmp(*(char**)a, *(char**)b);
}

int main(void)
{
    char *words[MAX_WORDS];
    char word[MAX_WORD_LENGTH];
    int i = 0;
    
    while(1)
    {
        printf("Enter word: ");
        if(read_line(word, MAX_WORD_LENGTH) == 0)
        {
            qsort(words, i, sizeof(char*), compare);
            print(words, i);

            return 0;
        }

        words[i] = malloc(strlen(word)+1);
        if(words[i] == NULL)
        {
            printf("Error while allocating memory!\n");
            exit(EXIT_FAILURE);
        }
        strcpy(words[i], word);
        i++;

        
        
        
    }

    
    return 0;
    

}

