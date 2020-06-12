#include <stdio.h>
#include <string.h>

double compute_average_word_length(const char *sentence)
{
    double average_word_length = 0;
    int number_of_words = 1;
    const char *p = sentence;

    while (*p++)
    {
        if (*p == ' ')
        {
            number_of_words++;
        }
    }

    printf("%d\n", number_of_words);
    printf("%lu\n", strlen(sentence));

    return (float)(strlen(sentence) - number_of_words - 1) / number_of_words;
}

int main(void)
{

    printf("Enter a sentence: ");
    int num_characters = 0;
    int num_words = 0;
    char ch;

    char word[100];
    gets(word);

    printf("Average word length: %.1f\n", compute_average_word_length(word));

    return 0;
}