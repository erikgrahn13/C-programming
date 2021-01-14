#include <stdio.h>
#include <stdlib.h>

void function1(void)
{
    printf("That's all, ");
}

void function2(void)
{
    printf("folks!");
}

int main(void)
{
    atexit(function2);
    atexit(function1);
    return 0;
}