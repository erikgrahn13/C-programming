#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Enter a positive number: ");
    double x;
    double y = 1.0;
    double average;
    double old_y = 0;

    scanf("%lf", &x);
    average = (y + x / y) / 2;

    while (fabs(y - old_y) > 0.00001)
    {
        old_y = y;
        average = (y + x / y) / 2;
        y = average;
    }

    printf("Square root: %f\n", y);

    return 0;
}