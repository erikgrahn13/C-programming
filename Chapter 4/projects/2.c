#include <stdio.h>

int main(void)
{
    printf("Enter a three-digit number: ");
    int number;
    scanf("%d", &number);

    printf("The reversal is: %d%d%d\n", number % 10, number / 10 % 10, number / 100);

    return 0;
}