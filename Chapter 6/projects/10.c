#include <stdio.h>

int main(void)
{

    int mm1, mm2;
    int dd1, dd2;
    int yy1, yy2;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &mm1, &dd1, &yy1);

    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &mm2, &dd2, &yy2);
        if(mm2 == 0 && dd2 == 0 && yy2 == 0)
        {
            break;
        }

        if (yy2 < yy1)
        {
            yy1 = yy2;
            mm1 = mm2;
            dd1 = dd2;
        }
        else if (yy1 == yy2)
        {
            if (mm2 < mm1)
            {
                yy1 = yy2;
                mm1 = mm2;
                dd1 = dd2;
            }
        }
        else if (mm1 == mm2)
        {
            if (dd2 < dd1)
            {
                yy1 = yy2;
                mm1 = mm2;
                dd1 = dd2;
            }
        }
    }
    printf("%d/%d/%02d is the earliest date\n", mm1, dd1, yy1);

    return 0;
}