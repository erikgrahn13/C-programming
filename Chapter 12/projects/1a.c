#include <stdio.h>
#define ARRAY_SIZE 50

int main(void)
{
    char message[ARRAY_SIZE];
    printf("Enter a message: ");

    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        message[i++] = ch;
    }

    printf("Reversal is: ");
    for (int j = i; j >= 0; j--)
    {
        printf("%c", message[j]);
    }

    printf("\n");

    return 0;
}