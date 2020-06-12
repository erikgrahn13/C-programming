#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if(is_full())
    {
        stack_overflow();
    }
    else
    {
        contents[top++] = i;
    }
}

char pop(void)
{
    if(is_empty())
    {
        stack_underflow();
    }
    else
    {
        return contents[--top];
    }
}

int main(void)
{
    printf("Enter parentheses and/or braces: ");
    char ch;

    while((ch = getchar()) != '\n')
    {
        if(ch == '(' || ch == '{')
        {
            push(ch);
        }
        else if(ch == ')' && pop() != '(')
        {
            printf("Parentheses/braces are nested properly\n");
            exit(EXIT_FAILURE);
        }
        else if(ch == '}' && pop() != '{')
        {
            printf("Parentheses/braces are nested properly\n");
            exit(EXIT_FAILURE);
        }
    }

    if(is_empty())
    {
        printf("Parentheses/braces are nested properly\n");
    }
    else
    {
        printf("Parentheses/braces are not nested properly\n");
    }

    return 0;
}