#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 50

void reverse(char *message)
{
    char *p = message;
    char *q = message + strlen(message) - 1;

    while (p < q)
    {
        char tmp = *p;
        *p = *q;
        *q = tmp;

        p++;
        q--;
    }
}

int main(void)
{
    char message[ARRAY_SIZE];
    printf("Enter a message: ");

    gets(message);
    reverse(message);

    printf("%s\n", message);

    return 0;
}