#include <stdio.h>

#include "queueADT.h"

int main(void)
{
    Queue q1 = create();
    Queue q2 = create();

    insert(q1, 13);
    insert(q1, 14);

    printf("peek first: %d\n", peek_queue_first(q1));
    printf("peek last: %d\n", peek_queue_last(q1));
    insert(q1, 15);
    item_t tmp = pop_queue(q1);
    printf("peek first: %d\n", peek_queue_first(q1));
    printf("peek last: %d\n", peek_queue_last(q1));
    destroy(q1);
    return 0;
}