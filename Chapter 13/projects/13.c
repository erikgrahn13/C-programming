#include <stdio.h>

#define MESSAGE_LENGTH 80

void encrypt(char *message, int shift)
{
    char *p;
    for (p = message; *p; p++)
    {
        if (*p >= 'A' && *p <= 'Z')
        {
            *p = ((*p - 'A') + shift) % 26 + 'A';
        }
        else if (*p >= 'a' && *p <= 'z')
        {
            *p = ((*p - 'a') + shift) % 26 + 'a';
        }
    }
}

int main(void)
{
    char message[MESSAGE_LENGTH];
    char ch;
    int count = 0;
    int shift_amount;
    printf("Enter message to be encrypted: ");

    while ((ch = getchar()) != '\n' && count < MESSAGE_LENGTH)
    {
        message[count++] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    encrypt(message, shift_amount);

    printf("Encrypted message: ");
    for (int i = 0; i < count; i++)
    {
        printf("%c", message[i]);
    }
    printf("\n");

    return 0;
}