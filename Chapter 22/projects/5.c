#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
    int orig_char, new_char;

    if(argc != 3)
    {
        printf("usage: %s [input-file] [output-file]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *inputFile = fopen(argv[1], "rb");
    if(inputFile == NULL)
    {
        printf("Error: couldn't open input file [%s]\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    FILE *outputFile = fopen(argv[2], "wb");
    if(outputFile == NULL)
    {
        printf("Error: couldn't create output file [%s]\n", argv[2]);
        exit(EXIT_FAILURE);
    }



    while((orig_char = getc(inputFile)) != EOF)
    {
        new_char = orig_char ^ KEY;
        putc(new_char, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}