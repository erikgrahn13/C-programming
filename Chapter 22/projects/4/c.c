#include <stdio.h>
#include <stdlib.h>

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
    int numberOfLines = 0;

    while((ch = getc(fp)) != EOF)
    {
        if(ch == '\n')
        {
            numberOfLines++;
        }
    }


    fclose(fp);
    printf("Number of lines in file <%s>:%d\n", argv[1], numberOfLines);


    return 0;
}