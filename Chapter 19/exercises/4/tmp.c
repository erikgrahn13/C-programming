#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(void)
{
    Stack s = NULL; 
    

    push(&s, 10);
    int i = pop(&s);
    printf("i:%d\n", i);
    

    push(&s, 11);
    push(&s, 12);

    make_empty(&s);
    i = pop(&s);

    return 0;
}
