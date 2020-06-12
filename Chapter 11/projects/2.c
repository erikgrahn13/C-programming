#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{

    int d1, d2, d3, d4, d5, d6, d7, d8;

    d1 = 8 * 60 + 0;
    d2 = 9 * 60 + 43;
    d3 = 11 * 60 + 19;
    d4 = 12 * 60 + 47;
    d5 = 14 * 60 + 0;
    d6 = 15 * 60 + 45;
    d7 = 19 * 60 + 0;
    d8 = 21 * 60 + 45;

    if (desired_time <= d1 + (d2 - d1) / 2)
    {
        *departure_time = d1;
        *arrival_time = 10 * 60 + 16;
    }
    else if (desired_time <= d2 + (d3 - d2) / 2)
    {

        *departure_time = d2;
        *arrival_time = 11 * 60 + 52;
    }
    else if (desired_time <= d3 + (d4 - d3) / 2)
    {

        *departure_time = d3;
        *arrival_time = 13 * 60 + 31;
    }
    else if (desired_time <= d4 + (d5 - d4) / 2)
    {

        *departure_time = d4;
        *arrival_time = 15 * 60 + 0;
    }
    else if (desired_time <= d5 + (d6 - d5) / 2)
    {

        *departure_time = d5;
        *arrival_time = 16 * 60 + 8;
    }
    else if (desired_time <= d6 + (d7 - d5) / 2)
    {

        *departure_time = d6;
        *arrival_time = 17 * 60 + 55;
    }
    else if (desired_time <= d7 + (d8 - d6) / 2)
    {

        *departure_time = d7;
        *arrival_time = 21 * 60 + 20;
    }
    else
    {

        *departure_time = d8;
        *arrival_time = 23 * 60 + 58;
    }
}

int main(void)
{
    int hours;
    int minutes;
    int minutes_since_midnight;
    int departure_time;
    int arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    minutes_since_midnight = hours * 60 + minutes;

    find_closest_flight(minutes_since_midnight, &departure_time, &arrival_time);

    printf("Closest departure time is %d:%02d %c.m., arriving at %d:%02d %c.m.\n", (departure_time / 60 >= 13) ? departure_time / 60 - 12 : departure_time / 60 - 0, departure_time % 60, (departure_time < 720 ? 'a' : 'p'), (arrival_time / 60 >= 13) ? arrival_time / 60 - 12 : arrival_time / 60 - 0, arrival_time % 60, (arrival_time < 720 ? 'a' : 'p'));

    return 0;
}