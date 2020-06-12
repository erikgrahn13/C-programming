#include <stdio.h>

int main(void)
{
    printf("Enter a value of x: ");
    int x;
    scanf("%d", &x);

    int answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("\nAnswer: %d\n", answer);

    return 0;
}