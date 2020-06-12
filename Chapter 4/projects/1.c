#include <stdio.h>

int main(void)
{
    printf("Enter a two-digit number: ");
    int number;
    scanf("%d", &number);

    printf("The reversal is: %d%d\n", number % 10, number / 10);

    return 0;
}