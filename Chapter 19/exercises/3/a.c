#include <stdio.h>
#include <stdlib.h>
#include "../1/queue.h"

#define QUEUE_SIZE 5

struct queue{
    item_t number[QUEUE_SIZE];
    int first_empty;
    int next_removed;
    int items_in_queue;
};


void insert(queue_t q,item_t i)
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

item_t pop_queue(queue_t q)
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

item_t peek_queue_first(queue_t q)
{
    return q->number[q->next_removed];
}

item_t peek_queue_last(queue_t q)
{
    return q->number[q->first_empty - 1];
}

bool is_empty(queue_t q)
{
    return q->items_in_queue == 0;
}