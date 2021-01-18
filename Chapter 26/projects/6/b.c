#include <stdio.h>
#include <time.h>

int main(void)
{
    char date[50];
    time_t cur_time = time(NULL);

    struct tm t = *localtime(&cur_time);

    strftime(date, 50, "%a, %e %b %y  %R", &t);

    printf("%s\n", date);

    return 0;
}