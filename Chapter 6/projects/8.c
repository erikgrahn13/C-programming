#include <stdio.h>

int main(void)
{
    printf("Enter number of days in month: ");
    int number_of_days;
    scanf("%d", &number_of_days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    int starting_day;
    scanf("%d", &starting_day);

    for(int i = 1; i < starting_day; i++)
    {
        printf("   ");
    }

    for(int i = 1; i <= number_of_days; i++)
    {
        
        

        printf("%3d", i);
        
        if((starting_day + i -1) % 7 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");


    return 0;
}