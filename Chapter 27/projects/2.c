#include <stdio.h>
#include <complex.h>
#include <math.h>

// a = r * cos(fi)
int main(void)
{
    double  a, b;
    printf("Enter values for a and b (real and imaginary parts): ");
    scanf("%lf %lf", &a, &b);

    double r = sqrt(a * a + b * b);

    printf("Phase angle: %g\n", acos(a/r));
    printf("r: %g\n", r);


    return 0;
}