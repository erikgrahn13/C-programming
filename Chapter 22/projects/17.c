#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

    if(argc != 2)
    {
        fprintf(stderr, "usage %s inputfile\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    int ch;
    int line = 0;

    while((ch = getc(fp)) != EOF)
    {
        if(line == 10)
        {
            putchar('\n');
            line = 0;
        }

        if(isdigit(ch))
        {
            if(line == 0)
            {
                putchar('(');
            }
            else if(line == 3)
            {
                printf(") ");
            }
            else if(line == 6)
            {
                putchar('-');
            }
                     
            putchar(ch);
            line++;
        }    
    }

    fclose(fp);
    return 0;
}
