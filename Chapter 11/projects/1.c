#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars %= 20;
    *tens = dollars / 10;
    dollars %= 10;
    *fives = dollars / 5;
    dollars %= 5;
    *ones = dollars;
}

int main(void)
{
    printf("Enter a dollar amount: ");
    int dollar;
    int twenties, tens, fives, ones;

    scanf("%d", &dollar);

    pay_amount(dollar, &twenties, &tens, &fives, &ones);
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}