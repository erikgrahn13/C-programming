#include <stdio.h>

int main(void)
{
    printf("Enter a two-digit number: ");
    int number;

    scanf("%d", &number);

    switch (number / 10)
    {
    case 9:
        printf("ninety");
        break;
    case 8:
        printf("eighty");
        break;
    case 7:
        printf("seventy");
        break;
    case 6:
        printf("sixty");
        break;
    case 5:
        printf("fifty");
        break;
    case 4:
        printf("forty");
        break;
    case 3:
        printf("thirty");
        break;
    case 2:
        printf("twenty");
        break;
    case 1:
        if (number % 10 == 9)
            printf("nineteen");
        else if (number % 10 == 8)
            printf("eighteen");
        else if (number % 10 == 7)
            printf("seventeen");
        else if (number % 10 == 6)
            printf("sixteen");
        else if (number % 10 == 5)
            printf("fifteen");
        else if (number % 10 == 4)
            printf("fourteen");
        else if (number % 10 == 3)
            printf("thirteen");
        else if (number % 10 == 2)
            printf("twelve");
        else if (number % 10 == 1)
            printf("eleven");
        else if (number % 10 == 0)
            printf("ten");
        break;

    default:
        break;
    }
    if (number / 10 != 1)
    {
        switch (number % 10)
        {
        case 9:
            printf("-nine");
            break;
        case 8:
            printf("-eight");
            break;
        case 7:
            printf("-seven");
            break;
        case 6:
            printf("-six");
            break;
        case 5:
            printf("-five");
            break;
        case 4:
            printf("-four");
            break;
        case 3:
            printf("-three");
            break;
        case 2:
            printf("-two");
            break;
        case 1:
            printf("-one");
            break;
        default:
            break;
        }
    }

    printf("\n");

    return 0;
}