#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_DEPARTURES 8

int main(void)
{
    int hours;
    int minutes;
    int minutes_since_midnight;
    int departure_times[NUMBER_OF_DEPARTURES] = {8 * 60 + 0,
                                                 9 * 60 + 43,
                                                 11 * 60 + 19,
                                                 12 * 60 + 47,
                                                 14 * 60 + 0,
                                                 15 * 60 + 45,
                                                 19 * 60 + 0,
                                                 21 * 60 + 45};
    int arrival_times[NUMBER_OF_DEPARTURES] = {10 * 60 + 0,
                                               11 * 60 + 52,
                                               13 * 60 + 31,
                                               15 * 60 + 0,
                                               16 * 60 + 8,
                                               17 * 60 + 55,
                                               21 * 60 + 20,
                                               23 * 60 + 58};
    // int d1, d2, d3, d4, d5, d6, d7, d8;

    // d1 = 8 * 60 + 0;
    // d2 = 9 * 60 + 43;
    // d3 = 11 * 60 + 19;
    // d4 = 12 * 60 + 47;
    // d5 = 14 * 60 + 0;
    // d6 = 15 * 60 + 45;
    // d7 = 19 * 60 + 0;
    // d8 = 21 * 60 + 45;

    int closest_derparture;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    minutes_since_midnight = hours * 60 + minutes;
    // 13:15 = 795

    for (int i = 0; i < NUMBER_OF_DEPARTURES; i++)
    {
        if (minutes_since_midnight < departure_times[i])
        {
            closest_derparture = i - 1;
            break;
        }
    }

    if (departure_times[closest_derparture] >= 12 * 60)
    {
        if (arrival_times[closest_derparture] >= 12 * 60)
        {
            printf("Closest departure time is %d:%02d p.m., arriving at %d:%02d p.m.\n", departure_times[closest_derparture] / 60, departure_times[closest_derparture] % 60, arrival_times[closest_derparture] / 60, arrival_times[closest_derparture] % 60);
        }
        else
        {
            printf("Closest departure time is %d:%02d p.m., arriving at %d:%02d a.m.\n", departure_times[closest_derparture] / 60, departure_times[closest_derparture] % 60, arrival_times[closest_derparture] / 60, arrival_times[closest_derparture] % 60);
        }
    }
    else
    {
        if (arrival_times[closest_derparture] >= 12 * 60)
        {
            printf("Closest departure time is %d:%02d a.m., arriving at %d:%02d p.m.\n", departure_times[closest_derparture] / 60, departure_times[closest_derparture] % 60, arrival_times[closest_derparture] / 60, arrival_times[closest_derparture] % 60);
        }
        else
        {
            printf("Closest departure time is %d:%02d a.m., arriving at %d:%02d a.m.\n", departure_times[closest_derparture] / 60, departure_times[closest_derparture] % 60, arrival_times[closest_derparture] / 60, arrival_times[closest_derparture] % 60);
        }
    }

    // if (minutes_since_midnight <= d1 + (d2 - d1) / 2)
    // {
    //     printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    // }
    // else if (minutes_since_midnight <= d2 + (d3 - d2) / 2)
    // {
    //     printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    // }
    // else if (minutes_since_midnight <= d3 + (d4 - d3) / 2)
    // {
    //     printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    // }
    // else if (minutes_since_midnight <= d4 + (d5 - d4) / 2)
    // {
    //     printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    // }
    // else if (minutes_since_midnight <= d5 + (d6 - d5) / 2)
    // {
    //     printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    // }
    // else if (minutes_since_midnight <= d6 + (d7 - d5) / 2)
    // {
    //     printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    // }
    // else if (minutes_since_midnight <= d7 + (d8 - d6) / 2)
    // {
    //     printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    // }
    // else
    // {
    //     printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    // }
    return 0;
}