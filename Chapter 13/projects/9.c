#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *word)
{
    int vowels = 0;

    while (*word)
    {
        switch (toupper(*word++))
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
    return vowels;
}

int main(void)
{
    printf("Enter a sentence: ");

    char *sentence;
    scanf("%[^\n]", sentence);
    printf("Your sentence contains %d vowels\n", compute_vowel_count(sentence));
    return 0;
}