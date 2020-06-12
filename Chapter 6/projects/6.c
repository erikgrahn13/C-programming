#include <stdio.h>

int main(void)
{
    printf("Enter a number n: ");

    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        if(i*i > n)
            break;
        if(i*i % 2 == 0)
        {
            printf("%d\n", i*i);
        }     
    }



    return 0;
}
