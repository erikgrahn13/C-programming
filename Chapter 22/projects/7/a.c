#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: compress_file [FILE]\n");
        exit(EXIT_FAILURE);
    }

    FILE *inputFile = fopen(argv[1], "rb");
    if(inputFile == NULL)
    {
        printf("Error: Couldn't open <%s>\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char *name = malloc(strlen(argv[1]) + 4);
    strcpy(name, argv[1]);
    strcat(name, ".rle");


    FILE *outputFile = fopen(name, "wb");
    if(outputFile == NULL)
    {
        printf("Error: Couldn't create outputfile\n");
        free(name);
        exit(EXIT_FAILURE);
    }
    
    char counter = 1;
    char previous;
    char buffer;

    size_t test = fread(&buffer, sizeof(char), 1, inputFile);
    previous = buffer;

    while((test = fread(&buffer, sizeof(char), 1, inputFile)) > 0)
    {
        if(previous == buffer)
        {
            counter++;
        }
        else
        {
            
            fwrite(&counter, 1, 1, outputFile);
            fwrite(&previous, 1, 1, outputFile);
            previous = buffer;
            counter = 1;
        }

    }

    fwrite(&counter, 1, 1, outputFile);
    fwrite(&buffer, 1, 1, outputFile);

    fclose(inputFile);
    fclose(outputFile);

    FILE *fp = fopen(name, "rb");
    if(fp == NULL)
    {
        printf("Failed to create debug file\n");
        free(name);
        exit(EXIT_FAILURE);
    }

    char ch;
    while((ch = getc(fp)) != EOF)
    {
        printf("%02X ", ch);
    }
    
    fclose(fp);


    free(name);

    return 0;
}