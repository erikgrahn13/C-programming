#include <stdio.h>
#include <math.h>

int main(void)
{
    int P, t;
    float r;
    
    printf("Enter the amount to deposit: ");
    scanf("%d", &P);

    printf("Enter the interest rate: ");
    scanf("%f", &r);

    printf("Enter number of years: ");
    scanf("%d", &t);

    double result = P * exp(r*t);

    printf("Result: $%.2f\n", result);

    return 0;
}