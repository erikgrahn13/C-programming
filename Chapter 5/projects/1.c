#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");

    int number;
    scanf("%d", &number);

    int number_of_digits;

    if (number >= 0 && number <= 9)
    {
        number_of_digits = 1;
    }
    else if (number >= 10 && number <= 99)
    {
        number_of_digits = 2;
    }
    else if (number >= 100 && number <= 999)
    {
        number_of_digits = 3;
    }

    printf("The number %d has %d digits\n", number, number_of_digits);

    return 0;
}