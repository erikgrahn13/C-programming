#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_REMIND 50
#define MSG_LEN 60

void remove_filename(char *url)
{
    char *p = url;

    while(*p++)
    ;

    while(*--p != '/')
    ;
    
    *p ='\0';
}

int main(void)
{
    
    char url[] = "http://www.knking.com/index.html";

    remove_filename(url);
    printf("test extension: %s\n", url);

    return 0;
}