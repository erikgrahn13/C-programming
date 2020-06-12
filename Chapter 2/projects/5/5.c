#include <stdio.h>

int main(void)
{
    printf("Enter a value for x: ");
    int x;
    scanf("%d", &x);

    int answer = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    printf("\nAnswer: %d\n", answer);

    return 0;
}