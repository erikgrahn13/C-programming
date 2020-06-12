#include <stdio.h>

#define ARRAY_SIZE 50

int main(void)
{
    char ch;
    char sentence[ARRAY_SIZE];
    char special_character;
    int counter = 0;
    printf("Enter a sentence: ");

    char *p = sentence;
    while ((ch = getchar()) != '\n' && p < sentence + ARRAY_SIZE)
    {
        if (ch == '.' || ch == '?' || ch == '!')
        {
            special_character = ch;
            break;
        }
        *p++ = ch;
        counter++;
    }
    p--;

    printf("Reversal of sentence: ");
    for (; p >= sentence; p--)
    {
        if (p == sentence)
        {
            char *q = p;

            while (*q != ' ')
            {
                putchar(*q++);
            }
        }
        else if (*p == ' ')
        {
            char j;
            char *q = p + 1;

            while (*q != ' ' && *q != '\0')
            {
                putchar(*q++);
            }
            putchar(' ');
        }
    }
    printf("%c\n", special_character);

    return 0;
}