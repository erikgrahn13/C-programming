#include <string.h>
#include <stdio.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(void)
{
    char word[MAX_WORD_LEN+2];
    int word_len;
    
    clear_line();
    
    for(;;)
    {
        read_word(word, MAX_WORD_LEN+1);
        word_len = strlen(word);
        
        if(word_len == 0)
        {
            flush_line();
            return 0;
        }
        if(word_len > MAX_WORD_LEN)
        {
            word[MAX_WORD_LEN] = '*';
        }

        //printf("word_len:%d   space_remaining:%d\n", word_len+1, space_remaining());
        if(word_len + 1 > space_remaining())
        {

             write_line();
             printf("\n");
             clear_line();
        }
        add_word(word);
    }
}