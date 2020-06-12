#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter a sentence: ");

    int vowels = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        switch (ch)
        {
        case 'A':
        case 'O':
        case 'U':
        case 'E':
        case 'I':
            vowels++;
            break;

        default:
            break;
        }
    }

    printf("Your sentence contains %d vowels\n", vowels);
    return 0;
}