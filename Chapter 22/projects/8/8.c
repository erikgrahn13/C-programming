#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} inventory[MAX_PARTS];

int num_parts = 0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void dump(void);
void restore(void);

int main(void)
{
    char code;

    for(;;)
    {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while(getchar() != '\n');

        switch (code)
        {
        case 'i': insert();
            break;
        case 's': search();
        break;
        case 'u': update();
        break;
        case 'p': print();
        break;
        case 'd': dump();
        break;
        case 'r': restore();
        break;
        case 'q': return 0;
        default:
            printf("Illegal code\n");
            break;
        }
        printf("\n");
    }
}

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
        printf("Database if full; can't add more parts.\n");
        return;
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
    read_line(inventory[num_parts].name, NAME_LEN);
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

    printf("Part Number   Part Name                  Quantity on hand\n");
    for(i = 0; i < num_parts; i++)
    {
        printf("%7d       %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
    }
}

void dump(void)
{
    printf("Enter name of output file: ");
    char filename[NAME_LEN];
    read_line(filename, NAME_LEN);
    
    printf("%s: %s\n", __func__, filename);
    FILE *fp = fopen(filename, "wb");
    if(fp == NULL)
    {
        printf("Error: Failed to create file\n");
        exit(EXIT_FAILURE);
    }


    fwrite(inventory, sizeof(struct part), num_parts, fp);

    fclose(fp);

}

void restore(void)
{
    printf("Enter name of input file: ");
    char filename[NAME_LEN];
    read_line(filename, NAME_LEN);

    FILE *fp = fopen(filename, "rb");
    if(fp == NULL)
    {
        printf("Error: Falied to load file\n");
        exit(EXIT_FAILURE);
    }

    
    num_parts = fread(inventory, sizeof(struct part), MAX_PARTS, fp);

    

    fclose(fp);
}