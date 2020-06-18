#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

#define QUEUE_SIZE 5

struct queue_type{
    item_t number[QUEUE_SIZE];
    int first_empty;
    int next_removed;
    int items_in_queue;
};

Queue create(void)
{
    struct queue_type *new_queue = malloc(sizeof(struct queue_type));
    if(new_queue == NULL)
    {
        printf("Error in creating queue.\n");
        exit(EXIT_FAILURE);
    }

    new_queue->first_empty = 0;
    new_queue->items_in_queue = 0;
    new_queue->next_removed = 0;
    return new_queue;
}

void destroy(Queue q)
{
    free(q);
}

void insert(Queue q,item_t i)
{
    if(q->items_in_queue == QUEUE_SIZE)
    {
        return;
    }

    if(q->first_empty == QUEUE_SIZE)
    {
        q->first_empty = 0;
    }
    q->number[q->first_empty++] = i;
    q->items_in_queue++;
}

item_t pop_queue(Queue q)
{
    if(is_empty(q))
    {
        printf("Queue is empty!\n");
        exit(1);
    }

    if(q->next_removed == QUEUE_SIZE)
    {
        q->next_removed = 0;
    }

    q->items_in_queue--;
    return q->number[q->next_removed++];
}

item_t peek_queue_first(Queue q)
{
    return q->number[q->next_removed];
}

item_t peek_queue_last(Queue q)
{
    return q->number[q->first_empty - 1];
}

bool is_empty(Queue q)
{
    return q->items_in_queue == 0;
}