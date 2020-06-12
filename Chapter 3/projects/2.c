#include <stdio.h>

int main(void)
{
    printf("Enter item number: ");

    int itemNumber;
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");

    float unitPrice;
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");

    int year;
    int month;
    int day;
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%d/%d/%d\n", itemNumber, unitPrice, month, day, year);

    return 0;
}