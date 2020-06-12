#include <stdio.h>

#define MESSAGE_LENGTH 80

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

    for (int i = 0; i < count; i++)
    {
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
            message[i] = ((message[i] - 'A') + shift_amount) % 26 + 'A';
        }
        else if (message[i] >= 'a' && message[i] <= 'z')
        {
            message[i] = ((message[i] - 'a') + shift_amount) % 26 + 'a';
        }
    }

    printf("Encrypted message: ");
    for (int i = 0; i < count; i++)
    {
        printf("%c", message[i]);
    }
    printf("\n");

    return 0;
}