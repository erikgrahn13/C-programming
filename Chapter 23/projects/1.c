#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    int x1, x2;
    
    printf("Find root of equation ax^2 + bx + c = 0\n");
    
    printf("Value of a: ");
    scanf("%d", &a);

    printf("Value of b: ");
    scanf("%d", &b);

    printf("Value of c: ");
    scanf("%d", &c);

    int root = b * b - 4 * a * c;
    
    if(root < 0)
    {
        printf("The roots are complex\n"); 
    }
    else
    {
        x1 = (-b + sqrt(root)) / (2 * a);
        x1 = (-b - sqrt(root)) / (2 * a);
    }
    
    printf("x1: %d\n", x1);
    printf("x2: %d\n", x2);


    return 0;
}