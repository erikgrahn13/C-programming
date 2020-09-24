#include <string.h>
#include "line.h"
#include "word.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
    char word[MAX_WORD_LEN+2];
    int word_len;

    if(argc != 3)
    {
        printf("Usage: %s [INPUTFILE] [OUTPUTFILE]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *inputFile = fopen(argv[1], "r");
    if(inputFile == NULL)
    {
        printf("Error: Couldn't read %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    FILE *outputFile = fopen(argv[2], "w");
    if(outputFile == NULL)
    {
        printf("Error: Couldn't read %s\n", argv[2]);
        fclose(inputFile);
        exit(EXIT_FAILURE);
    }

    clear_line();
    for(;;)
    {
        read_word(inputFile, word, MAX_WORD_LEN+1);
        word_len = strlen(word);
        if(word_len == 0)
        {
            flush_line(outputFile);
            return 0;
        }
        if(word_len > MAX_WORD_LEN)
        {
            word[MAX_WORD_LEN] = '*';
        }
        if(word_len + 1 > space_remaining())
        {
            write_line(outputFile);
            clear_line();
        }
        add_word(word);
    }

    fclose(inputFile);
    fclose(outputFile);
}