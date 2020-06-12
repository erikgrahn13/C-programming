#include <stdio.h>

int main(void)
{
    printf("Enter two fractions separated by operator (+, -, *, /): ");
    int nominator1, nominator2, denominator1, denominator2;
    char operator;
    scanf("%d/%d%1c%d/%d", &nominator1, &denominator1, &operator, &nominator2, &denominator2);

    switch (operator)
    {
    case '+':
        printf("The sum is %d/%d\n", nominator1 * denominator2 + nominator2 * denominator1, denominator1 * denominator2);
        break;
    case '-':
        printf("The result is %d/%d\n", nominator1 * denominator2 - nominator2 * denominator1, denominator1 * denominator2);
        break;
    default:
    case '*':
        printf("The result is %d/%d\n", nominator1 * nominator2, denominator1 * denominator2);
        break;
    case '/':
        printf("The result is %d/%d\n", nominator1 / denominator1, nominator2 / denominator2);
        break;
        break;
    }

    return 0;
}