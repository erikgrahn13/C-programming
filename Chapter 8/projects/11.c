#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char phone_number[15] = {0};
    char ch;
    int i = 0;
    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n' && i < 15)
    {
        ch = toupper(ch);

        switch (ch)
        {
        case 'A':
        case 'B':
        case 'C':

            ch = '2';
            /* code */
            break;
        case 'D':
        case 'E':
        case 'F':
            ch = '3';
            break;
        case 'G':
        case 'H':
        case 'I':
            ch = '4';
            break;
        case 'J':
        case 'K':
        case 'L':
            ch = '5';
            break;
        case 'M':
        case 'N':
        case 'O':
            ch = '6';
            break;
        case 'P':
        case 'R':
        case 'S':
            ch = '7';
            break;
        case 'T':
        case 'U':
        case 'V':
            ch = '8';
            break;
        case 'W':
        case 'X':
        case 'Y':
            ch = '9';
        default:

            break;
        }
        phone_number[i++] = ch;
    }
    printf("In numeric form: ");
    for (int j = 0; j < i; j++)
    {
        printf("%c", phone_number[j]);
    }
    printf("\n");

    return 0;
}