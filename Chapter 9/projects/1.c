#include <stdio.h>

#define ARRAY_SIZE 5

void selection_sort(int integers[], int n)
{
    if (n == 1)
    {
        return;
    }
    int largest_element = 0;
    int swap_element;

    for (int i = 0; i < n; i++)
    {
        if (largest_element < integers[i])
        {
            largest_element = integers[i];
            swap_element = i;
        }
    }

    integers[swap_element] = integers[n - 1];
    integers[n - 1] = largest_element;
    selection_sort(integers, n - 1);
}

int main(void)
{
    printf("Enter a series of integers: ");
    int integers[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%d", &integers[i]);
    }

    selection_sort(integers, 5);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", integers[i]);
    }
    printf("\n");

    return 0;
}