#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("usage: %s <file>\n", argv[0]);
        exit(EXIT_FAILURE);      
    }

    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL)
    {
        printf("Error: Couldn't open file: %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    int ch;
    while((ch = getc(fp)) != EOF)
    {
        putchar(toupper(ch));
    }

    fclose(fp);

    return 0;
}