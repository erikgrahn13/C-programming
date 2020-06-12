#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25


struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};

int num_parts = 0;
int MAX_PARTS = 10;

struct part *inventory = NULL;

int find_part(int number)
{
    int i;

    for(i = 0; i < num_parts; i++)
    {
        if(inventory[i].number == number)
        {
            return i;
        }
    }
    return -1;
}

void insert(void)
{
    int part_number;

    if(num_parts == MAX_PARTS)
    {
        MAX_PARTS *= 2;
        inventory = realloc(inventory, MAX_PARTS);
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if(find_part(part_number) >= 0)
    {
        printf("Part already exists.\n");
        return;
    }

    inventory[num_parts].number = part_number;

    printf("Enter part name: ");
    read_line(inventory[num_parts].name , NAME_LEN);

    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    
    num_parts++;
}

void search(void)
{
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if(i >= 0)
    {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    }
    else
    {
        printf("Part not found.\n");
    }
}

void update(void)
{
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if(i >= 0)
    {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
    }
    else
    {
        printf("Part not found.\n");
    }
    
}

void print(void)
{
    int i;

    printf("Part number   Part Name                     "
            "Quantity on Hand\n");

    for(i = 0; i < num_parts; i++)
    {
        printf("%7d       %-25s%11d\n", inventory[i].number,
               inventory[i].name, inventory[i].on_hand);
    }
}

int main(void)
{
    inventory = malloc(sizeof(struct part)*MAX_PARTS);

    if(inventory == NULL)
    {
        printf("Inventory could not be allocated!\n");
        exit(1);
    }



    char code;

    for(;;)
    {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while(getchar() != '\n');

        switch (code)
        {
        case 'i':
            insert();
            break;
        case 's':
            search();
            break;
        case 'u':
            update();
            break;
        case 'p':
            print();
            break;
        case 'q':
            free(inventory);
         return 0;
        
        default:
            printf("Illegal code\n");
            break;
        }
    }
}