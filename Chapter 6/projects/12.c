#include <stdio.h>

int main(void)
{

    float e;
    

    printf("Enter precision: ");
    float precision;
    scanf("%f", &precision);
    

    e = 1;
    
    int factorial = 1;
    for(int i = 0;; ++i)
    {
        factorial *= i + 1;

        if(1.0f / factorial < precision)
        {
            break;
        }
        e += 1.0f / factorial;    
    }
    
    printf("The approximation of e = %f\n", e);

    return 0;
}