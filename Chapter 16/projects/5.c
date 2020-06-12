#include <stdio.h>

#define NUMBER_OF_FLIGHTS 8

typedef struct flight{
    int departure_time;
    int arrival_time;
} flight_t;

int main(void)
{
    int hours;
    int minutes;
    int minutes_since_midnight;
    int d1, d2, d3, d4, d5, d6, d7, d8;

    flight_t flights[NUMBER_OF_FLIGHTS] = {{.departure_time = 8*60+0, .arrival_time=10*60+16},
                                           {.departure_time = 9*60+43, .arrival_time=11*60+52},
                                           {.departure_time = 11*60+19, .arrival_time=13*60+31},
                                           {.departure_time = 12*60+47, .arrival_time=15*60+0},
                                           {.departure_time = 14*60+0, .arrival_time=16*60+8},
                                           {.departure_time = 15*60+45, .arrival_time=17*60+55},
                                           {.departure_time = 19*60+0, .arrival_time=21*60+20},
                                           {.departure_time = 21*60+45, .arrival_time=23*60+58}};

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

    minutes_since_midnight = hours * 60 + minutes;
    flight_t closest_flight;
    
    if(minutes_since_midnight > flights[NUMBER_OF_FLIGHTS-1].departure_time)
    {
            closest_flight = flights[0];     
    }
    else
    {
        for(int i = 0; i < NUMBER_OF_FLIGHTS; i++)
        {          
            
            if(minutes_since_midnight <= flights[i].departure_time +(flights[i+1].departure_time-flights[i].departure_time) /2)
            {
                closest_flight = flights[i];
                break;
            }   
            closest_flight=flights[i];     
        }
    }
        int closest_departure_time_hours = closest_flight.departure_time > 780? closest_flight.departure_time / 60 -12: closest_flight.departure_time/60;
        int closest_departure_time_minutes = closest_flight.departure_time % 60;
        int closest_arrival_time_hours = closest_flight.arrival_time > 780? closest_flight.arrival_time / 60 -12: closest_flight.arrival_time/60;
        int closest_arrival_time_minutes = closest_flight.arrival_time % 60;
    printf("Closest departure time is %d:%02d %c.m., arriving at %d:%02d %c.m.\n", closest_departure_time_hours, closest_departure_time_minutes, closest_flight.departure_time < 720? 'a':'p', closest_arrival_time_hours,closest_arrival_time_minutes, closest_flight.arrival_time < 720? 'a':'p');
    return 0;
}