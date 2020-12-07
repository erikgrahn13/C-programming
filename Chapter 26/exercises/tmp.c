#include <stdio.h>
#include <stdarg.h>

int max_int(int n, ...)
{
    va_list ap;
    int i, current, largest;

    va_start(ap, n);
    largest = n;

    for(i = 1; ; i++)
    {
        current = va_arg(ap, int);
        if(current == 0)
        {
            break;
        }

        if(current > largest)
        {
            largest = current;
        }
    }
    va_end(ap);
    return largest;
}


int main(void)
{
    printf("%d\n", max_int(31, 10, 30, 20, 0));
    return 0;
}