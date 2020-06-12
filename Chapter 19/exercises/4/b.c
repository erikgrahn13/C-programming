#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

void make_empty(Stack *s)
{
    Stack p = *s;
    Stack tmp;

    while(p)
    {
        tmp = p;
        p = p->next;
        free(tmp);
    }

    *s = NULL;
}

bool is_empty(const Stack *s)
{
    return *s == NULL;
}

bool is_full(const Stack *s)
{
    return false;
}

void push(Stack *s, int i)
{
    Stack new_node = malloc(sizeof(Stack));
    if(new_node == NULL)
    {
        printf("Couldn't allocate memory for node\n");
        exit(1);
    }

    
    new_node->contents = i;
    
    new_node->next = *s;
    *s = new_node;
}

int pop(Stack *s)
{
    if(!is_empty(s))
    {
        int tmp = (*s)->contents;
        Stack tmp_stack = *s;
        *s = (*s)->next;
        free(tmp_stack);
        return tmp;
    }
    else
    {
        printf("Stack is empty!\n");
        exit(1);
    }
    
}