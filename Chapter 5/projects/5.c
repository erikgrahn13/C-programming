#include <stdio.h>

int main(void)
{
    printf("Enter the amount of taxable income: ");
    int taxable_income;
    float tax_due;

    scanf("%d", &taxable_income);

    if (taxable_income < 750)
    {
        tax_due = taxable_income * 0.01f;
    }
    else if (taxable_income >= 750 && taxable_income <= 2250)
    {
        tax_due = 7.50f + (taxable_income - 750) * 0.02f;
    }
    else if (taxable_income >= 2250 && taxable_income <= 3750)
    {
        tax_due = 37.50f + (taxable_income - 2250) * 0.03f;
    }
    else if (taxable_income >= 3750 && taxable_income <= 5250)
    {
        tax_due = 82.50f + (taxable_income - 3750) * 0.04f;
    }
    else if (taxable_income >= 5250 && taxable_income <= 7000)
    {
        tax_due = 142.50f + (taxable_income - 5250) * 0.05f;
    }
    else
    {
        tax_due = 230.00f + (taxable_income - 7000) * 0.06f;
    }

    printf("Tax due: %.2f\n", tax_due);
    return 0;
}