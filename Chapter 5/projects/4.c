#include <stdio.h>

int main(void)
{
    printf("Enter a wind speed (in knots): ");

    int wind_speed;

    scanf("%d", &wind_speed);

    if (wind_speed < 1)
    {
        printf("Calm\n");
    }
    else if (wind_speed >= 1 && wind_speed <= 3)
    {
        printf("Light air\n");
    }
    else if (wind_speed >= 4 && wind_speed <= 27)
    {
        printf("Breeze\n");
    }
    else if (wind_speed >= 28 && wind_speed <= 47)
    {
        printf("Gale\n");
    }
    else if (wind_speed >= 48 && wind_speed <= 63)
    {
        printf("Storm\n");
    }
    else if (wind_speed > 63)
    {
        printf("Hurricane\n");
    }
    return 0;
}