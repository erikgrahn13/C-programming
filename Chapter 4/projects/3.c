#include <stdio.h>

int main(void)
{
    printf("Enter a three-digit number: ");
    int i1, i2, i3;
    scanf("%1d%1d%1d", &i1, &i2, &i3);

    printf("The reversal is: %d%d%d\n", i3, i2, i1);

    return 0;
}