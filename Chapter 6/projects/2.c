#include <stdio.h>

int main(void)
{
    printf("Enter two integers: ");

    int m;
    int n;
    int reminder;

    scanf("%d %d", &m, &n);

    while(n > 0)
    {
        reminder = m % n;
        m = n;
        n = reminder;
    }

    printf("Greatest common divisor: %d\n", m);


    return 0;
}