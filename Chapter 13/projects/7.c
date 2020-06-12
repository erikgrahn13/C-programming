#include <stdio.h>

int main(void)
{
    char *ten[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *singular[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                        "seventeen", "eighteen", "nineteen"};

    printf("Enter a two-digit number: ");
    int number;

    scanf("%d", &number);

    if (number > 19)
    {
        if (number % 10 == 0)
        {
            printf("%s\n", ten[number / 10 - 2]);
        }
        else
        {
            printf("%s-%s\n", ten[number / 10 - 2], singular[number % 10 - 1]);
        }
    }
    else
    {
        printf("%s\n", singular[number - 1]);
    }

    return 0;
}