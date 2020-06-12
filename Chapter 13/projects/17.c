#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define ARRAY_SIZE 100

bool is_palindrome(const char *message)
{

    const char *p = message + strlen(message) - 1;
    const char *q = message;

    for (; p != message; q++, p--)
    {
        if (*q != *p)
        {

            return false;
        }
    }

    return true;
}

int main(void)
{
    char message[ARRAY_SIZE];
    char *p = message;
    char ch;
    printf("Enter a message: ");

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            *p++ = tolower(ch);
        }
    }
    *p = '\0';

    if (is_palindrome(message))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}