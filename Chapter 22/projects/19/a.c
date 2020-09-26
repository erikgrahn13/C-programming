#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        fprintf(stderr, "usage %s windows-textfile\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *inputFile = fopen(argv[1], "rb");
    if(inputFile == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char filename[25];
    strcpy(filename, argv[1]);
    strcat(filename, ".unix");

    FILE *outputFile = fopen(filename, "wb");
    if(outputFile == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    char ch;
    while((ch = getc(inputFile)) != EOF)
    {

        if(ch != '\r')
        {
            fwrite(&ch, sizeof(char), 1, outputFile);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}