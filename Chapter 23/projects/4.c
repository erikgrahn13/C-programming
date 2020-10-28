#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[100];
    char *p;
    char *q;
    printf("Enter a series of words separated by single spaces: ");
    gets(words);

    int number_of_words = 0;
    if(p = strtok(words, " ") != NULL)
    {
        number_of_words++;
        while((p = strtok(NULL, " ")) != NULL)
        {
            number_of_words++;
            q = p;
            //printf("%s\n", p);
        }
        p = q;
    }

    
    for(int i = number_of_words; i > 0; i--)
    {
        printf("%s\n", p);
        p -= 2;
        
        while(*p != '\0')
        {
            p--;
        }
        
        p++;;
        

    }

    return 0;
}