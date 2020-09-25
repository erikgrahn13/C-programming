#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source_fp, *dest_fp;
    int ch;

    if(argc != 3)
    {
        fprintf(stderr, "usage: fcopy source dest\n");
        exit(EXIT_FAILURE);
    }

    if((source_fp = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
    }

    if((dest_fp = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        fclose(source_fp);
        exit(EXIT_FAILURE);
    }

    char buffer[512];
    size_t elements_to_write;
    while((elements_to_write = fread(buffer, sizeof(char), 512, source_fp)) > 0)
    {
        fwrite(buffer, sizeof(char), elements_to_write, dest_fp);
    }
    
    fclose(source_fp);
    fclose(dest_fp);
    return 0;


}