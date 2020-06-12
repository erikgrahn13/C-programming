#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define STACK_SIZE 100

struct Stack_tag{
    int contents;
    struct Stack_tag *next;;
};

typedef struct Stack_tag *Stack;

void make_empty(Stack *s);
bool is_empty(const Stack *s);
bool is_full(const Stack *s);
void push(Stack *s, int i);
int pop(Stack *s);

#endif