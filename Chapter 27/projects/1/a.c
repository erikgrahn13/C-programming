#include <stdio.h>
#include <complex.h>
#include <math.h>

int main(void)
{   
    //double a = 5, b = 2, c = 1;
    double a, b, c;

    printf("Enter the coefficients (a, b ,c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double complex disriminant_sqrt = csqrt(b * b - 4 * a * c);

    if(cimag(disriminant_sqrt) > 0.0)
    {
        double complex root1 = (-b + disriminant_sqrt) / (2 * a);
        double complex root2 = (-b - disriminant_sqrt) / (2 * a);

        double imag1 = cimag(root1);
        double imag2 = cimag(root2);
        printf("root1 = %g %c %gi\n", creal(root1), imag1 < 0.0 ? '-':'+', fabs(imag1));
        printf("root2 = %g %c %gi\n", creal(root2), imag2 < 0.0 ? '-':'+', fabs(imag2));
    }
    else
    {
        double complex root1 = (-b + disriminant_sqrt) / (2 * a);
        double complex root2 = (-b - disriminant_sqrt) / (2 * a);
        
        printf("root1 = %g\n", creal(root1));
        printf("root2 = %g\n", creal(root2));
    }
    
    return 0;
}