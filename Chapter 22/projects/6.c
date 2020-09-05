#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: %s [FILE]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *fp = fopen(argv[1], "rb");
    if(fp == NULL)
    {
        printf("Error: couldn't open file <%s>\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Offset               Bytes             Characters\n");
    printf("------  -----------------------------  ----------");
    

    int ch;

    int counter = 0;
    char tmp[10];


    size_t line;
    while((line = fread(tmp, sizeof(tmp[0]), sizeof(tmp) / sizeof(tmp[0]), fp)) > 0)
    {
            printf("\n");
            printf("%6d  ", counter );
            counter += 10;
            int i;
            for(i = 0; i < line; i++)
            {
                printf("%02X ", tmp[i]);

            }

            for(; i < 10; i++)
            {
                printf("   ");
            }
            
            putchar(' ');
            for(i = 0; i < line; i++)
            {
                if(isprint(tmp[i]))
                {
                    putchar(tmp[i]);
                }
                else
                {
                    putchar('.');
                }
                
            }
    }
    
    fclose(fp);

    return 0;
}