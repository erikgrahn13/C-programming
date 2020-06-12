#include <stdio.h>

int power(int x, int n)
{
    printf("%d %d\n", x, n);
    if (n == 0)
    {
        return 1;
    }
    else
    {
        if (n % 2 == 0)
        {
            int tmp = power(x, n / 2);
            return tmp * tmp;
        }
        else
        {
            return x * power(x, n - 1);
        }
    }
}

int main(void)
{
    printf("Enter values for x and n: ");
    int x;
    int n;
    scanf("%d%d", &x, &n);

    printf("Result: %d\n", power(x, n));

    return 0;
}