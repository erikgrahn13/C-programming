#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "../1/queue.h"

struct queue{
    item_t number;
    struct queue *next;

};

static queue_t first = NULL;
static queue_t last = NULL;

void insert(queue_t q ,item_t item)
{
    struct queue *new_node = malloc(sizeof(struct queue));

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

item_t pop_queue(queue_t q)
{
    if(is_empty(q))
    {
        printf("Queue is empty!\n");
        exit(1);
    }
    queue_t tmp = first;
    first = first->next;
    return tmp->number;
}

item_t peek_queue_first(queue_t q)
{
    return first->number;
}

item_t peek_queue_last(queue_t q)
{
    return last->number;
}

bool is_empty(queue_t q)
{
    return first == NULL;
}