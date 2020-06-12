#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{

    int reminder;
    while (denominator > 0)
    {
        reminder = numerator % denominator;
        numerator = denominator;
        denominator = reminder;
    }
    *reduced_numerator = numerator / numerator;
    *reduced_denominator = denominator / numerator;
}

int main(void)
{
    printf("Enter a fraction: ");
    int numerator;
    int denominator;
    int m;
    int n;

    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &m, &n);

    printf("In lowest terms: %d/%d\n", m, n);

    return 0;
}