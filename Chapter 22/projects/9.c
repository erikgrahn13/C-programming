#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} inventory1[MAX_PARTS], inventory2[MAX_PARTS], saveInventory[MAX_PARTS];

void print(size_t num_parts, struct part *tmp);

int main(int argc, char *argv[])
{
    // if(argc != 4)
    // {
    //     printf("Usage: %s [inputfile1] [inputfile2] [outputfile]\n", argv[0]);
    //     exit(EXIT_FAILURE);
    // }

    FILE *inputfile1 = fopen(argv[1], "rb");
    if(inputfile1 == NULL)
    {
        printf("Couldn't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    FILE *inputfile2 = fopen(argv[2], "rb");
    if(inputfile2 == NULL)
    {
        printf("Couldn't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    size_t num_parts1 = fread(inventory1, sizeof(struct part), MAX_PARTS, inputfile1);
    size_t num_parts2 = fread(inventory2, sizeof(struct part), MAX_PARTS, inputfile2);

    int num_parts_save = 0;
    for(int i = 0; i < num_parts1 || i < num_parts2; i++)
    {
        if(inventory1[i].number == inventory2[i]. number)
        {
            if(strcmp(inventory1[i].name, inventory2[i].name) != 0)
            {
                printf("Error: Different part names for the same part numner\n");
                continue;
            }

            saveInventory[num_parts_save].number = inventory1[i].number;
            saveInventory[num_parts_save].on_hand = inventory1[i].on_hand + inventory2[i].on_hand;
            strcpy(saveInventory[num_parts_save].name, inventory1[i].name);
            num_parts_save++;
        }
        else if(inventory1[i].number < inventory2[i].number)
        {
            if(i < num_parts1)
            {
                saveInventory[num_parts_save].number = inventory1[i].number;
                saveInventory[num_parts_save].on_hand = inventory1[i].on_hand;
                strcpy(saveInventory[num_parts_save].name, inventory1[i].name);
                num_parts_save++;
            }
            if(i < num_parts2)
            {
                saveInventory[num_parts_save].number = inventory2[i].number;
                saveInventory[num_parts_save].on_hand = inventory2[i].on_hand;
                strcpy(saveInventory[num_parts_save].name, inventory2[i].name);
                num_parts_save++;
            }
        }
        else
        {
            if(i < num_parts2)
            {
                saveInventory[num_parts_save].number = inventory2[i].number;
                saveInventory[num_parts_save].on_hand = inventory2[i].on_hand;
                strcpy(saveInventory[num_parts_save].name, inventory2[i].name);
                num_parts_save++;
            }
            if(i < num_parts1)
            {
                saveInventory[num_parts_save].number = inventory1[i].number;
                saveInventory[num_parts_save].on_hand = inventory1[i].on_hand;
                strcpy(saveInventory[num_parts_save].name, inventory1[i].name);
                num_parts_save++;
            }
        }
        
    }

    printf("Inventory1\n");
    print(num_parts1, &inventory1);
    printf("\nInventory2\n");
    print(num_parts2, &inventory2);
    printf("\nsaveInventory\n");
    print(num_parts_save, &saveInventory);

    fclose(inputfile1);
    fclose(inputfile2);

    FILE *outputfile = fopen(argv[3], "wb");
    if(outputfile == NULL)
    {
        printf("Couldn't create %s\n", argv[3]);
        exit(EXIT_FAILURE);
    }

    fwrite(saveInventory, sizeof(struct part), num_parts_save, outputfile);
    fclose(outputfile);

    return 0;
}


void print(size_t num_parts, struct part *tmp)
{
    int i;

    printf("Part Number   Part Name                  Quantity on hand\n");
    for(i = 0; i < num_parts; i++)
    {
        printf("%7d       %-25s%11d\n", tmp[i].number, tmp[i].name, tmp[i].on_hand);
    }
}







