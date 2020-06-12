#include <stdio.h>

int main(void)
{
    printf("Enter an amount: ");
    float amount;

    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", amount * 1.05);

    return 0;
}