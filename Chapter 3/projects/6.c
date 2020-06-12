#include <stdio.h>

int main(void)
{
    printf("Enter two fractions separated by a plus sign: ");
    int nominator1, nominator2, denominator1, denominator2;

    scanf("%d/%d+%d/%d", &nominator1, &denominator1, &nominator2, &denominator2);

    printf("The sum is %d/%d\n", nominator1 * denominator2 + nominator2 * denominator1, denominator1 * denominator2);

    return 0;
}