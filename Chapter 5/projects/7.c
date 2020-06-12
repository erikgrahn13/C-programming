#include <stdio.h>

int main(void)
{
    printf("Enter four integers: ");

    int num1;
    int num2;
    int num3;
    int num4;
    int largest1;
    int smallest1;
    int largest2;
    int smallest2;

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 < num2)
    {
        largest1 = num2;
        smallest1 = num1;
    }
    else
    {
        largest1 = num1;
        smallest1 = num2;
    }
    if (num3 < num4)
    {
        largest2 = num4;
        smallest2 = num3;
    }
    else
    {
        largest2 = num3;
        smallest2 = num4;
    }

    if (largest1 < largest2)
    {
        largest1 = largest2;
    }
    if (smallest1 > smallest2)
    {
        smallest1 = smallest2;
    }

    printf("Largest: %d\n", largest1);
    printf("Smallest: %d\n", smallest1);

    return 0;
}