#include <stdio.h>
#include <math.h>

int main(void)
{
    double r;
    double angle;
    double a;
    double b;

    printf("Enter the values for r and angle: ");
    scanf("%lf", &r);
    scanf("%lf", &angle);

    a = r * cosf(angle);
    b = r * sinf(angle);

    printf("%g %c %gi\n", a, b < 0.0 ? '-' : '+', fabs(b));


    return 0;
}