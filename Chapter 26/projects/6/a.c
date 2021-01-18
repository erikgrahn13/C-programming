#include <stdio.h>
#include <time.h>

int main(void)
{
    char date[50];
    time_t cur_time = time(NULL);

    char ch;
    struct tm t = *localtime(&cur_time);

    strftime(date, 50, "%A, %B %d, %Y  %I:%M", &t);

    if(t.tm_hour <= 11)
    {
        ch = 'a';
    }
    else
    {
        ch = 'p';
    }
    
    printf("%s%c\n", date, ch);

    return 0;
}