#include <stdio.h>

int main(void)
{
    printf("Enter a number between 0 and 32767: ");
    int number;
    scanf("%d", &number);

    printf("In octal, your number is: %01d%01d%01d%01d%01d\n", number / 8 / 8 / 8 / 8 % 8, number / 8 / 8 / 8 % 8, number / 8 / 8 % 8, number / 8 % 8, number % 8);

    return 0;
}