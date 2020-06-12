#include <stdio.h>

typedef struct date{
    int month;
    int day;
    int year;
}date_t;

int compare_dates(struct date d1, struct date d2)
    {
        if(d1.year < d2.year)
        {
            return -1;
        }
        else if(d1.year > d2.year)
        {
            return 1;
        }
        else
        {
            if(d1.month < d2.month)
            {
                return -1;
            }
            else if(d1.month > d2.month)
            {
                return 1;
            }
            else
            {
                if(d1.day < d2.day)
                {
                    return -1;
                }
                else if(d1.day > d2.day)
                { 
                    return 1;
                }
                else 
                {
                    return 0;
                }   
            }   
        }
    }
    

int main(void)
{
    date_t date1;
    date_t date2;

    printf("Enter first date (mm/dd/yy): ");

    scanf("%2d/%2d/%2d", &date1.month, &date1.day, &date1.year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &date2.month, &date2.day, &date2.year);

    int dates = compare_dates(date1, date2);
    if(dates < 0)
    {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
    }
    else if(dates > 0)
    {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", date2.month, date2.day, date2.year, date1.month, date1.day, date1.year);
    }
    else
    {
        printf("%d/%d/%02d is equal to %d/%d/%02d\n", date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
    }
    

    return 0;
}