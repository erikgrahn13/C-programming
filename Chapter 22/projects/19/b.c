#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        fprintf(stderr, "usage %s unix-textfile outputfile\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *inputFile = fopen(argv[1], "rb");
    if(inputFile == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }


    FILE *outputFile = fopen(argv[2], "wb");
    if(outputFile == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    char ch;
    while((ch = getc(inputFile)) != EOF)
    {

        if(ch == '\n')
        {
            char tmp = '\r';
            fwrite(&tmp, 1, 1 , outputFile);
        }
        fwrite(&ch, sizeof(char), 1, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}