#include <stdio.h>
#include <stdlib.h>
#include "../1/queue.h"

int main(void)
{
    queue_t my_queue;
    item_t i;

    insert(my_queue, 13);
    insert(my_queue, 14);

    i = pop_queue(my_queue);
    
    insert(my_queue, 15);
    i = pop_queue(my_queue);
    
    

    insert(my_queue, 14);
    insert(my_queue, 15);
    insert(my_queue, 16);
    insert(my_queue, 17);
    insert(my_queue, 18);
    insert(my_queue, 19);
    insert(my_queue, 20);
    
    i = pop_queue(my_queue);
    
    
    insert(my_queue, 20);
    
    i = pop_queue(my_queue);
    i = pop_queue(my_queue);
    i = pop_queue(my_queue);
    printf("peek first: %d\n", peek_queue_first(my_queue));
    

    
    insert(my_queue, 22);
    
    insert(my_queue, 14);
    
    insert(my_queue, 15);
    
    insert(my_queue, 16);
    printf("peek last: %d\n", peek_queue_last(my_queue));
    insert(my_queue, 24);
    
    
    // while(1)
    // {
    //     i = pop_queue(my_queue);
    //     printf("pop: %d\n", i);
    // }

    
    

    return 0;
}