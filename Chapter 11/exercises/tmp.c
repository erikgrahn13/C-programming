#include <stdio.h>

int *find_largest(int a[], int n)
{
    int tmp = a[0];
    int j;
    int *p;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > tmp)
        {
            j = i;
            tmp = a[i];
            p = &a[i];
        }
    }
    return p;
    //return &a[j];
}

int main(void)
{
    int a[] = {1, 2, 3, 8, 4, 5};
    int *p = find_largest(a, 6);

    printf("%d\n", *p);
    return 0;
}