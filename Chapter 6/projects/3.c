#include <stdio.h>

int main(void)
{
    printf("Enter a fraction: ");
    int numerator;
    int denominator;
    int reminder;
    int m;
    int n;

    scanf("%d/%d", &numerator, &denominator);
    m = numerator;
    n = denominator;

    while(n > 0)
    {
        reminder = m % n;
        m = n;
        n = reminder;
    }

    printf("In lowest terms: %d/%d\n", numerator / m, denominator /m);

    return 0;
}