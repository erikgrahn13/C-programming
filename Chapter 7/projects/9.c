#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter a 12-hour time: ");

    int hour;
    int minutes;

    char ch;

    scanf("%d:%d", &hour, &minutes);

    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);

        if (ch == 'P')
        {
            hour += 12;
        }
    }

    printf("Equivalent 24-hour time: %d:%d\n", hour, minutes);

    return 0;
}