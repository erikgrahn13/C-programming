#include <stdio.h>
#include <string.h>

void reverse_name(char *name)
{
    char first_name[5];
    first_name[0] = ',';
    first_name[1] = ' ';
    first_name[2] = name[0];
    first_name[3] = '.';
    first_name[4] = '\0';

    char *p;

    while (*name++)
    {
        if (*name == ' ')
        {
            *name = '\0';
            p = ++name;
        }
    }

    strcat(p, first_name);
    printf("%s\n", p);
}

int main(void)
{
    printf("Enter a first and last name: ");
    char ch;
    char *first_name;

    scanf("%[^\n]", first_name);

    reverse_name(first_name);

    return 0;
}