#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int i = 0; i < 1000; i++)
    {
        printf("%d", rand() & 1);
    }

    printf("\n");

    return 0;
}