#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct queue_type{
    item_t *number;
    int first_empty;
    int next_removed;
    int items_in_queue;
    int size;
};

Queue create(int size)
{
    struct queue_type *new_queue = malloc(sizeof(struct queue_type));
    if(new_queue == NULL)
    {
        printf("Error in creating queue.\n");
        exit(EXIT_FAILURE);
    }

    new_queue->number = malloc(sizeof(item_t)* size);
    if(new_queue->number == NULL)
    {
        free(new_queue);
        printf("Error in creating queue.\n");
        exit(EXIT_FAILURE);
    }

    new_queue->size = size;
    new_queue->first_empty = 0;
    new_queue->items_in_queue = 0;
    new_queue->next_removed = 0;
    return new_queue;
}

void destroy(Queue q)
{
    free(q->number);
    free(q);
}

void insert(Queue q,item_t i)
{
    if(q->items_in_queue == q->size)
    {
        return;
    }

    if(q->first_empty == q->size)
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

    if(q->next_removed == q->size)
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