#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MESSAGE_LENGTH 80

int main(void)
{
    char message[MESSAGE_LENGTH];
    char ch;
    int count = 0;
    int shift_amount;
    printf("Enter name of file to be encrypted: ");

    char filename[25];
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL)
    {
        printf("Error: Couldn't create file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    strcat(filename, ".enc");
    FILE *outputFile = fopen(filename, "w");
    if(outputFile == NULL)
    {
        printf("Error: Couldn't create file %s\n", filename);
        fclose(fp);
        exit(EXIT_FAILURE);
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    while((ch = getc(fp)) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A') + shift_amount) % 26 + 'A';
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a') + shift_amount) % 26 + 'a';
        }

        putc(ch, outputFile);
        
    }

    fclose(fp);
    fclose(outputFile);

    return 0;
}