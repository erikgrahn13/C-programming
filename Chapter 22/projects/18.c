#include <stdio.h>
#include <stdlib.h>

int getLargestValue(int *p, int i)
{
    int largest = *p;
    

    for(int j = 0 ; j < i; j++)
    {
        if(largest < p[j])
        {
            largest = p[j];
        }
    }

    return largest;

}

int getSmallestValue(int *p, int i)
{
    int smallest = *p;

    for(int j = 0; j < i; j++)
    {
        if(smallest > p[j])
        {
            smallest = p[j];
        }
    }

    return smallest;
}

int getMedianValue(int *p, int i)
{

}


int compare(const void *a, const void *b)
{
  return ( *(int*)a - *(int*)b );
}

int main(int argc, char *argv[])
{
    int numbers[10000];

    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while(fscanf(fp, "%d", &numbers[i]) > 0)
    {
        i++;
    }

    qsort(numbers, i, sizeof(int), compare);
    
    printf("Largest number: %d\n", numbers[i-1]);
    printf("Smallest number: %d\n", numbers[0]);

    int median;

    if((i % 2) == 0)
    {
        median = (double)(numbers[(i-1) / 2] + numbers[(i-1) / 2 + 1]) / 2;
    }
    else
    {
        median = numbers[(i / 2)];
    }
    
    printf("Median: %d\n", median);

    printf("\n");

    fclose(fp);
    return 0;
}