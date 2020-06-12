#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define QUEUE_SIZE 5

struct queue_tag{
    int number[QUEUE_SIZE];
    int first_empty;
    int next_removed;
    int items_in_queue;
};

typedef struct queue_tag Queue;

void insert(Queue *q ,int data);

int pop_queue(Queue *q);

int peek_queue_first(Queue *q);

int peek_queue_last(Queue *q);

bool is_empty(Queue *q);

#endif