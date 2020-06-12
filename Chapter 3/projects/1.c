#include <stdio.h>

int main(void)
{
    printf("Enter a date (mm/dd/yyyy): ");

    int year;
    int month;
    int day;

    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%02d%d\n", year, month, day);

    return 0;
}