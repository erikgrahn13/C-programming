#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char ch;
    char prev_ch = '\0';
    int number_of_sentences = 0;

    while((ch = getchar()) != EOF)
    {
        if(strchr(".?!", prev_ch) != NULL)
        {
            if(isspace(ch))
            {
                number_of_sentences++;
            }   
        }
        
        prev_ch = ch;
    }

    printf("Number of sentences: %d\n", number_of_sentences);

    return 0;
}