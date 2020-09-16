#include <stdio.h>
#include <stdlib.h>

void print_date(int month, int day, int year);

char *months[] = {{"January"}, {"February"}, {"March"}, {"April"}, {"May"}, {"June"},
                {"July"}, {"August"}, {"September"}, {"October"}, {"November"}, {"December"}};

int main(int argc, char *argv[])
{
    int month, day, year;
    if(sscanf(argv[1], "%d/%d/%d", &month, &day, &year) == 3)
    {
        if(month < 1 || month > 12)
        {
            printf("Date not the proper form\n");
            exit(EXIT_FAILURE);
        }
        print_date(month, day, year);
    }
    else if(sscanf(argv[1], "%d-%d-%d", &month, &day, &year) == 3)
    {
        if(month < 1 || month > 12)
        {
            printf("Date not the proper form\n");
            exit(EXIT_FAILURE);
        }
        print_date(month, day, year);
    }
    else
    {
        printf("Date not the proper form\n");
    }
    
    





    return 0;
}

void print_date(int month, int day, int year)
{
    printf("%s %d, %d\n", months[month-1], day, year);
    
}