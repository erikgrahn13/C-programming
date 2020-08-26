#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    for(int i = 0; i < argc; i++)
    {
        fp = fopen(argv[i+1], "r");
        if(fp == NULL)
        {
            printf("error: file <%s> couldn't be opened\n", argv[i+1]);
            exit(EXIT_FAILURE);
        }

        int ch;

        while((ch = getc(fp)) != EOF)
        {
            putchar(ch);
        }

        fclose(fp);

    }

    return 0;
}