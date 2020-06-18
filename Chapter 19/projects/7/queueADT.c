#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "queueADT.h"

struct queue_type{
    item_t number;
    struct queue_type *next;

};

static Queue first = NULL;
static Queue last = NULL;

Queue create(void)
{
    Queue q = malloc(sizeof(struct queue_type));
    if(q == NULL)
    {
        printf("Error in create: queue could not be created.");
        exit(EXIT_FAILURE);
    }
    q->next = NULL;
    return q;
}

void destroy(Queue q)
{
    while(!is_empty(q))
    {
        pop_queue(q);
    }

    free(q);
}

void insert(Queue q ,item_t item)
{
    struct queue_type *new_node = malloc(sizeof(struct queue_type));

    if(new_node == NULL)
    {
        printf("Failed to allocate item\n");
        return;
    }

    new_node->number = item;
    new_node->next = NULL;

    if(first == NULL)
    {
        first = new_node;  
        last = new_node;    
    }
    else
    {
        last->next = new_node;
        last = new_node;
    }
    

}

item_t pop_queue(Queue q)
{
    if(is_empty(q))
    {
        printf("Queue is empty!\n");
        exit(1);
    }
    
    item_t i = first->number;
    Queue tmp = first;
    first = first->next;
    free(tmp);
    return i;
}

item_t peek_queue_first(Queue q)
{
    return first->number;
}

item_t peek_queue_last(Queue q)
{
    return last->number;
}

bool is_empty(Queue q)
{
    return first == NULL;
}