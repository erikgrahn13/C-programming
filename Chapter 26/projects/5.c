#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void)
{
    struct tm date1;
    struct tm date2;
    char date[50];

    printf("Enter first date (yyyy/mm/dd): ");
    scanf("%d/%d/%d", &date1.tm_year, &date1.tm_mon, &date1.tm_mday);

    printf("Enter second date (yyyy/mm/dd): ");
    scanf("%d/%d/%d", &date2.tm_year, &date2.tm_mon, &date2.tm_mday);

    date1.tm_year -= 1900;
    date1.tm_mon--;
    date1.tm_isdst = -1;
    date1.tm_min = 0;
    date1.tm_hour = 0;
    date1.tm_sec = 0;
    date1.tm_yday = 0;
    date1.tm_wday = 0;

    date2.tm_year -= 1900;
    date2.tm_mon--;
    date2.tm_isdst = -1;
    date2.tm_min = 0;
    date2.tm_hour = 0;
    date2.tm_sec = 0;
    date2.tm_yday = 0;
    date2.tm_wday = 0;

    double diff_time = difftime(mktime(&date1), mktime(&date2));

    printf("Difference in days: %d\n", abs((int)diff_time / 3600 / 24));

    return 0;
}