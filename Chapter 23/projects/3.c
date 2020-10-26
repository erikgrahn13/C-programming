#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    char ch;
    bool is_space = true;

    while((ch = getchar()) != EOF)
    {
        if(is_space)
        {
            putchar(toupper(ch));
        }
        else
        {
            putchar(ch);
        }
        
        is_space = isspace(ch) ? true: false;
    }

    return 0;
}