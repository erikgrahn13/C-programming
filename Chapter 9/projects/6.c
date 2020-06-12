#include <stdio.h>

int polynomial(int x)
{
    int result;
    result = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    return result;
}

int main(void)
{
    printf("Enter a value for x: ");

    int x;
    scanf("%d", &x);

    printf("The polynomial results is: %d\n", polynomial(x));

    return 0;
}