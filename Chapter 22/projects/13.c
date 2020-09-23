#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hours;
    int minutes;
    int minutes_since_midnight;
    int d1, d2, d3, d4, d5, d6, d7, d8;

    d1 = 8 * 60 + 0;
    d2 = 9 * 60 + 43;
    d3 = 11 * 60 + 19;
    d4 = 12 * 60 + 47;
    d5 = 14 * 60 + 0;
    d6 = 15 * 60 + 45;
    d7 = 19 * 60 + 0;
    d8 = 21 * 60 + 45;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    
    FILE *fp = fopen("flights.dat", "r");
    if(fp == NULL)
    {
        printf("Error: Couldn't open file flights.dat\n");
        exit(EXIT_FAILURE);
    }

    

    minutes_since_midnight = hours * 60 + minutes;

    int departure_hour, departure_minute, arrival_hour, arrival_minute;
    char arrival[5];

    int flights[8][2];

    int i = 0;
    while(fscanf(fp, "%2d:%2d %2d:%2d", &departure_hour, &departure_minute, &arrival_hour, &arrival_minute) == 4)
    {
        

        flights[i][0] = (departure_hour * 60 + departure_minute);
        flights[i++][1] = (arrival_hour * 60 + arrival_minute);
    }

    int k = 0;
    for(k = 0; k < i; k++)
    {
        if(minutes_since_midnight <= flights[k][0] + (flights[k+1][0] - flights[k][0]) / 2 )
        {
            break;
        }

        if(k == i - 1)
        {
            k = 0;
            break;
        }
    }

    printf("Closest departure time is %d:%02d %s., arriving at %d:%02d %s.\n",  flights[k][0] / 60, flights[k][0] % 60, 
    flights[k][0] > 720 ? "p.m" : "a.m", flights[k][1] / 60, flights[k][1] % 60, flights[k][1] > 720 ? "p.m" : "a.m");
 
    fclose(fp);

    return 0;
}