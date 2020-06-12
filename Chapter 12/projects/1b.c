#include <stdio.h>
#define ARRAY_SIZE 50

int main(void)
{
    char message[ARRAY_SIZE];
    printf("Enter a message: ");

    char ch;
    char *p = message;
    ;

    while ((ch = getchar()) != '\n' && p < message + ARRAY_SIZE)
    {
        *p++ = ch;
    }

    printf("Reversal is: ");

    for (; p >= message; p--)
    {
        printf("%c", *p);
    }

    printf("\n");

    return 0;
}