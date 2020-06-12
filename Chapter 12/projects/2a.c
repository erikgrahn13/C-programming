#include <stdio.h>
#include <ctype.h>

#define ARRAY_SIZE 100

int main(void)
{
    char message[ARRAY_SIZE];
    char ch;
    printf("Enter a message: ");

    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            message[i++] = tolower(ch);
        }
    }

    int length = i;

    for (int j = 0; j < length; j++)
    {
        if (message[j] != message[--i])
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}