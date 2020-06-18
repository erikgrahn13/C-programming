#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int item_t;
typedef struct queue_type *Queue;

Queue create(void);
void destroy(Queue q);
void insert(Queue q ,item_t item);
item_t pop_queue(Queue q);
item_t peek_queue_first(Queue q);
item_t peek_queue_last(Queue q);
bool is_empty(Queue q);

#endif