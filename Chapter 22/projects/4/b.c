#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("usage: %s <filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL)
    {
        printf("Error: couldn't open file <%s>\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char ch;
    int numberOfWords = 0;

    while((ch = getc(fp)) != EOF)
    {
        if(isspace(ch))
        {
            numberOfWords++;
        }
    }

    fclose(fp);
    printf("Number of words in <%s>:%d\n", argv[1], numberOfWords);


    return 0;
}