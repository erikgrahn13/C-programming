#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char ch;

    while((ch = getchar()) != EOF)
    {
        if(!iscntrl(ch) || ch == '\n') 
        {
            putchar(ch);
        }
        else
        {
            putchar('?');
        }
        
    }

    return 0;
}