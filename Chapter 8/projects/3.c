#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    bool repeated_digit = false;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {

        while (n > 0)
        {
            digit = n % 10;

            if (digit_seen[digit])
                repeated_digit = true;
            digit_seen[digit] = true;
            n /= 10;
        }

        if (repeated_digit)
        {
            printf("Repeated digit\n");
        }
        else
        {
            printf("No repeated digit\n");
        }

        for (int i = 0; i < 10; ++i)
        {
            digit_seen[i] = false;
        }

        printf("Enter a number: ");
        scanf("%ld", &n);
        repeated_digit = false;
    }
    return 0;
}