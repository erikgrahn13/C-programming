#include <stdio.h>

int main(void)
{

    float e;
    

    printf("Enter an integer n: ");
    int n;
    scanf("%d", &n);
    

    e = 1;
    
    int factorial = 1;
    for(int i = 0; i < n; ++i)
    {
        factorial *= i + 1;

        e += 1.0f / factorial;    
    }
    
    printf("The approximation of e = %f\n", e);

    return 0;
}