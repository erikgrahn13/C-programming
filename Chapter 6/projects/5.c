#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);

    printf("The reversal is: ");
    do{       
        printf("%d", number % 10);
        number /= 10;     
    }while(number > 0);

    printf("\n");
    return 0;
}