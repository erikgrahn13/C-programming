#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

void make_empty(Stack *s)
{
    s->top = 0;
}

bool is_empty(const Stack *s)
{
    return s->top == 0;
}

bool is_full(const Stack *s)
{
    return s->top == STACK_SIZE;
}

void push(Stack *s, int i)
{
    if(is_full(s))
    {
        printf("Stack is full\n");
        exit(1);
    }
    s->contents[s->top++] = i;
}

int pop(Stack *s)
{
    if(is_empty(s))
    {
        printf("Stack is empty!\n");
        exit(1);
    }
    return s->contents[(s->top--)-1];
}