#include <stdio.h>

int main(void)
{
    float commission;
    float rival_commission;
    int shares;
    float price;
    float value;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);

    printf("Enter the price per share: ");
    scanf("%f", &price);

    value = shares * price;

    if (shares < 2000)
    {
        rival_commission = 33.0f + 0.03f * shares;
    }
    else
    {
        rival_commission = 33.0f + 0.02f * shares;
    }

    if (value < 2500.00f)
    {
        commission = 30.00f + 0.017f * value;
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + 0.0066f * value;
    }
    else if (value < 20000.00f)
    {
        commission = 76.00f + 0.0034f * value;
    }
    else if (value < 50000.00f)
    {
        commission = 100.00f + 0.0022f * value;
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + 0.0011f * value;
    }
    else
    {
        commission = 255.00f + 0.0009f * value;
    }

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }
    printf("Commision: $%.2f\n", commission);
    printf("Rival broker $%.2f\n", rival_commission);
    return 0;
}