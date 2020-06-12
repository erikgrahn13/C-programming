#include <stdio.h>

int main(void)
{
    printf("Enter a first and last name: ");
    char ch;
    char first_name;
    char last_name[20];
    char counter = 0;

    first_name = getchar();

    while (getchar() != ' ')
    {
    }

    while ((ch = getchar()) != '\n' && counter < 20)
    {
        last_name[counter++] = ch;
    }

    printf("You entered the name: ");
    for (int i = 0; i < counter; i++)
    {
        printf("%c", last_name[i]);
    }
    printf(", %c.\n", first_name);

    return 0;
}