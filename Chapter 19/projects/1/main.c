#include <stdio.h>
#include <stdlib.h>

#include "1.h"

int main(void)
{
    Stack s1 = create();
    printf("Enter parentheses and/or braces: ");
    char ch;

    while((ch = getchar()) != '\n')
    {
        if(ch == '(' || ch == '{')
        {
            push(s1, ch);
        }
        else if(ch == ')' && pop(s1) != '(')
        {
            printf("Parentheses/braces are nested properly\n");
            exit(EXIT_FAILURE);
        }
        else if(ch == '}' && pop(s1) != '{')
        {
            printf("Parentheses/braces are nested properly\n");
            exit(EXIT_FAILURE);
        }
    }

    if(is_empty(s1))
    {
        printf("Parentheses/braces are nested properly\n");
    }
    else
    {
        printf("Parentheses/braces are not nested properly\n");
    }

    return 0;
}