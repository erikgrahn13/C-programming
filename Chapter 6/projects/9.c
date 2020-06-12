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

    printf("Enter number of payments: ");
    int number_of_payments;
    scanf("%d", &number_of_payments);

    while(number_of_payments > 0)
    {
        loan = loan * interestRate - monthlyPayment;
        printf("Balance remaining after payment: %.2f\n", loan);
        number_of_payments--;

    }

    return 0;
}