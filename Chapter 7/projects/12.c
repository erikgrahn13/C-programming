#include <stdio.h>

int main(void)
{
    float num1;
    float num2;
    float num3;
    char ch1;
    char ch2;

    printf("Enter an expression: ");
    scanf("%f%c%f%c%f", &num1, &ch1, &num2, &ch2, &num3);

    switch (ch1)
    {
    case '+':
        num1 += num2;
        break;
    case '-':
        num1 -= num2;
        break;
    case '*':
        num1 *= num2;
        break;
    case '/':
        num1 /= num2;

    default:
        break;
    }

    switch (ch2)
    {
    case '+':
        num1 += num3;
        break;
    case '-':
        num1 -= num3;
        break;
    case '*':
        num1 *= num3;
        break;
    case '/':
        num1 /= num3;

    default:
        break;
    }

    printf("Value of expression: %f\n", num1);

    return 0;
}