#include <stdio.h>

int main(void)
{
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int nr1, nr2, nr3;

    scanf("(%d) %d-%d", &nr1, &nr2, &nr3);

    printf("You entered %d.%d.%d\n", nr1, nr2, nr3);

    return 0;
}