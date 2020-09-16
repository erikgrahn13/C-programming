#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: %s [FILE]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *fp = fopen(argv[1], "r");
    char buffer[50];
    int itemNumber;
    float unitPrice;
    int month, day, year;

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");

    while(fgets(&buffer, sizeof(buffer), fp) != NULL)
    {
        sscanf(buffer, "%d,%f,%d/%d/%d", &itemNumber, &unitPrice, &month, &day, &year);
        printf("%d\t\t$%7.2f\t%d/%d/%d\n", itemNumber, unitPrice, month, day, year);
    }
    
    fclose(fp);
    return 0;
}