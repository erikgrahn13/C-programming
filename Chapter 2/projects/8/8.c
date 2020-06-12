#include <stdio.h>

int main(void)
{
    printf("Enter amount of loan: ");
    float loan;
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    float interestRate;
    scanf("%f", &interestRate);

    interestRate = interestRate / 100 / 12 + 1;
    printf("Enter monthly payment: ");
    float monthlyPayment;
    scanf("%f", &monthlyPayment);

    loan = loan * interestRate - monthlyPayment;
    printf("Balance remaining after first payment: %.2f\n", loan);

    loan = loan * interestRate - monthlyPayment;
    printf("Balance remaining after second payment: %.2f\n", loan);
    loan = loan * interestRate - monthlyPayment;
    printf("Balance remaining after third payment: %.2f\n", loan);
    return 0;
}