#include <stdio.h>

unsigned short swap_bytes(unsigned short i)
{
    return (i << 8) | (i >> 8);
}

int main(void)
{
    unsigned short number;
    printf("Enter a hexadecimal number (up to four digits): ");
    scanf("%hx", &number);

    number = swap_bytes(number);

    printf("Number with bytes swapped: %hx\n", number);

    return 0;

}

