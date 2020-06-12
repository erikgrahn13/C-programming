#include <stdio.h>
#include <ctype.h>

#define ARRAY_SIZE 100

int main(void)
{
    char message[ARRAY_SIZE];
    char ch;
    printf("Enter a message: ");

    char *p = message;
    char *q = message;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            *p++ = tolower(ch);
        }
    }

    for (; p != message; q++, p--)
    {
        if (*q != *(p - 1))
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}