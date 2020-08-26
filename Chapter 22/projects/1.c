#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    bool canBeOpened = true;

    for(int i = 1; i < argc; i++)
    {
        if((fp = fopen(argv[i], "r")) == NULL)
        {
            printf("%s can't be opened\n", argv[i]);
            canBeOpened = false;
        }
        else
        {
            printf("%s can be opened\n", argv[i]);
            fclose(fp);
        }
        
    }
    
    if(!canBeOpened)
    {
        exit(EXIT_FAILURE);
    }
    
    return 0;

}