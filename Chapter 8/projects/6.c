#include <stdio.h>
#include <ctype.h>

#define ARRAY_SIZE 30

int main(void)
{
    printf("Enter message: ");

    char ch;
    char message[ARRAY_SIZE];
    int number_of_characters = 0;
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        message[number_of_characters] = ch;
        number_of_characters++;
    }

    for (int i = 0; i < number_of_characters; ++i)
    {
        switch (message[i])
        {
        case 'A':
            message[i] = '4';
            break;
        case 'B':
            message[i] = '8';
            break;
        case 'E':
            message[i] = '3';
            break;
        case 'I':
            message[i] = '1';
            break;
        case 'O':
            message[i] = '0';
            break;
        case 'S':
            message[i] = '5';
            break;
        default:
            break;
        }
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < number_of_characters; ++i)
    {
        printf("%c", message[i]);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
