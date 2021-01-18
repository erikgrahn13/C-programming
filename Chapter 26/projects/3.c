#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100000

int my_compare(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    int array[ARRAY_SIZE];

    for(int i = 0, j = ARRAY_SIZE; i < ARRAY_SIZE; i++)
    {
        array[i] = j--;
    }
    
    clock_t start_clock = clock();
    printf("start_clock: %g\n", start_clock);

    qsort(array, ARRAY_SIZE, sizeof(int), my_compare);
      printf("Time used to sort %d integers: %g sec.\n", ARRAY_SIZE,
         (clock() - start_clock) / (double) CLOCKS_PER_SEC);

    return 0;
}