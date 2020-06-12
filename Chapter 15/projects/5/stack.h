#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define STACK_SIZE 20

void stack_overflow(void);
void stack_underflow(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

#endif