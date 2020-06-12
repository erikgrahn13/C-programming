#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60

//char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;

struct node{
    char word[MAX_LINE_LEN+1];
    struct node *next;
};

struct node *line = NULL;
struct node *tail = NULL;

void clear_line(void)
{
    struct node *p = line;
    struct node *tmp;


    while(p)
    {
        tmp = p;
        p = p->next;
        free(tmp);
    }

    line = NULL;
    tail = NULL;

    line_len = 0;
    num_words = 0;
    
}

void add_word(const char *word)
{
    struct node *new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("Could not allocate word!\n");
        exit(1);
    }
    
    if(line == NULL)
    {
        line = new_node;
        tail = line;   
    }
    else
    {
        tail->next = new_node;
        tail = new_node;        
    }
    strcpy(new_node->word, word);
    new_node->next = NULL;

    if(num_words > 0)
    {
        line_len += strlen(word) +1;
     }
     else
     {
         line_len += strlen(word);
     }
     
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    struct node *p = line;
    int extra_spaces, spaces_to_insert, i, j;

    extra_spaces = MAX_LINE_LEN - line_len;

    while(p)
    {
        //printf("KUK\n");
        printf("%s", p->word);

                if(num_words > 1)
                {
                    spaces_to_insert = extra_spaces / (num_words -1);
                    for(j = 1; j <= spaces_to_insert+1; j++)
                    {
                        putchar(' ');
                    }
                    extra_spaces -= spaces_to_insert;
                    num_words--;
                }

        
        p = p->next;
    }
}

void flush_line(void)
{
    
    struct node *p = line;
    while(p)
    {
        printf("%s", p->word);
        printf(" ");
        p = p->next;
    }
    printf("\n");
}