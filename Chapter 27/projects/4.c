#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(void)
{
    int n;
    int k;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    double complex r;

    for(int k = 0; k < n; k++)
    {
        r = cexp((2 * M_PI * I * k) / n );

        if(cimag(r) == 0.0)
        {
            printf("roots of unity: %d = %g\n", k, creal(r));
        }
        else if(cimag(r) == 1 || cimag(r) == -1)
        {
            printf("roots of unity: %d = %g %c i\n", k, creal(r), cimag(r) < 0.0 ? '-' : '+');
        }
        else
        {
            printf("roots of unity: %d = %g %c %gi\n", k, creal(r), cimag(r) < 0.0 ? '-' : '+', fabs(cimag(r)));
        }
        
        
    }

    

    return 0;
}