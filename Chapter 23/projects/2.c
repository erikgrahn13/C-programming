#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char ch;
    bool is_space = true;
    while((ch = getchar()) != EOF)
    {
        if(!is_space)
        {
            putchar(ch);
        }
        else if(!isspace(ch))
        {
            is_space = false;
            putchar(ch);
        }

        if(ch == '\n')
        {
            is_space = true;
        }
        
    }

    return 0;
}