#include <stdio.h>

int main(void)
{
    printf("Enter a positive integer: ");
    int number;
    scanf("%d", &number);
    long double factorial = 1;
    ;

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d: %Lf\n", number, factorial);

    return 0;
}

// a) 7
// b) 12
// c) 20
// d) 20
// e) 34
// f) 170
// g) 1754