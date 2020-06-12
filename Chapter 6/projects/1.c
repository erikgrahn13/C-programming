#include <stdio.h>

int main(void)
{

    float number;
    float largest_number;

    printf("Enter a number: ");
    scanf("%f", &number);
    largest_number = number;

    while(number > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if(number > largest_number)
        {
            largest_number = number;
        }
        

    }

    printf("The largest number entered was %f\n", largest_number);

    return 0;
}