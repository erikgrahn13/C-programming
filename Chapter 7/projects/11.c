#include <stdio.h>

int main(void)
{
    printf("Enter a first and last name: ");
    char ch;
    char first_name;

    while ((ch = getchar()) == ' ')
    {
    }

    first_name = ch;

    while ((ch = getchar()) != ' ')
    {
    }
    while ((ch = getchar()) == ' ')
    {
    }

    while (ch != '\n')
    {
        if (ch != ' ')
        {
            printf("%c", ch);
        }
        ch = getchar();
    }

    printf(", %c.\n", first_name);

    return 0;
}