#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"




int stack[STACK_SIZE] = {0};
int top = 0;

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands\n");
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

void push(int i)
{
    if (!is_full())
    {
        stack[top++] = i;
    }
    else
    {
        stack_overflow();
    }
}

int pop(void)
{

    if (!is_empty())
    {
        return stack[--top];
    }
    else
    {
        stack_underflow();
    }
}

