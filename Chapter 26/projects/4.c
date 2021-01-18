#include <stdio.h>
#include <time.h>

int main(void)
{
    printf("Enter a date (mm/dd/yyyy) and an integer n: ");


    struct tm t;
    int n;
    char date[50];

    scanf("%d/%d/%d %d", &t.tm_mon, &t.tm_mday, &t.tm_year, &n);

    t.tm_mday += n;
    t.tm_mon--;

    mktime(&t);

    strftime(date, 50, "%D", &t);

    printf("%s\n", date);


    return 0;
}