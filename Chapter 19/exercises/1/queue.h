#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int item_t;
typedef struct queue *queue_t;

void insert(queue_t ,item_t item);

item_t pop_queue(queue_t);

item_t peek_queue_first(queue_t);

item_t peek_queue_last(queue_t);

bool is_empty(queue_t);

#endif