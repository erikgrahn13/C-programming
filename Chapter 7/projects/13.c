#include <stdio.h>

int main(void)
{

    printf("Enter a sentence: ");
    int num_characters = 0;
    int num_words = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
        {
            num_words++;
        }
        else
        {
            num_characters++;
        }
    }
    num_words++;

    printf("Average word length: %.1f\n", (float)num_characters / num_words);

    return 0;
}