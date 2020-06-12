#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

bool straight, flush, four, three;
int pairs;
int hand[5][2];

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
    int num_in_rank[NUM_RANKS];
    int num_in_suit[NUM_SUITS];
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
    return 0;
}

void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for (int i = 0; i < NUM_CARDS; i++)
    {
        hand[i][0] = 0;
        hand[i][1] = 0;
    }

    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");
        rank_ch = getchar();

        switch (rank_ch)
        {
        case '0':
            exit(EXIT_SUCCESS);
        case '2':
            rank = 0;
            break;
        case '3':
            rank = 1;
            break;
        case '4':
            rank = 2;
            break;
        case '5':
            rank = 3;
            break;
        case '6':
            rank = 4;
            break;
        case '7':
            rank = 5;
            break;
        case '8':
            rank = 6;
            break;
        case '9':
            rank = 7;
            break;
        case 't':
        case 'T':
            rank = 8;
            break;
        case 'j':
        case 'J':
            rank = 9;
            break;
        case 'q':
        case 'Q':
            rank = 10;
            break;
        case 'k':
        case 'K':
            rank = 11;
            break;
        case 'a':
        case 'A':
            rank = 12;
            break;
        default:
            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
        case 'c':
        case 'C':
            suit = 0;
            break;
        case 'd':
        case 'D':
            suit = 1;
            break;
        case 'h':
        case 'H':
            suit = 2;
            break;
        case 's':
        case 'S':
            suit = 3;
            break;
        default:
            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
        {
            if (ch != ' ')
            {
                bad_card = true;
            }
        }

        if (bad_card)
        {
            printf("Bad card; ignored.\n");
            continue;
        }

        bool duplicate = false;
        for (int i = 0; i < NUM_CARDS; i++)
        {
            if ((hand[i][0] == rank) && (hand[i][1] == suit))
            {
                duplicate = true;

                break;
            }
        }

        if (duplicate)
        {
            printf("Duplicate card; ignored.\n");
        }
        else
        {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

void analyze_hand(void)
{
    int num_consec = 0;
    int rank, suit;

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    int equal_suit = 1;
    for (int i = 0; i < NUM_CARDS - 1; i++)
    {

        if (hand[i][1] == hand[i + 1][1])
        {
            equal_suit++;
        }
    }

    if (equal_suit == NUM_CARDS)
    {
        flush = true;
    }

    // TODO sortera ranks i storleksordning för att kunna avgöra om du har stege

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (hand[i][0] > hand[j][0])
            {
                int tmp_rank = hand[j][0];
                int tmp_suit = hand[j][1];
                hand[j][0] = hand[i][0];
                hand[j][1] = hand[i][1];
                hand[i][0] = tmp_rank;
                hand[i][1] = tmp_suit;
            }
        }
    }

    int straight_count = 1;
    for (int i = 0; i < 5 - 1; i++)
    {
        if (hand[i][0] + 1 == hand[i + 1][0])
        {
            straight_count++;
        }
    }

    if (straight_count == NUM_CARDS)
    {
        straight = true;
        return;
    }

    int pair_count = 1;
    for (int i = 0; i < NUM_CARDS - 1; i++)
    {
        if (hand[i][0] == hand[i + 1][0])
        {
            pair_count++;
        }
    }

    if (pair_count == 4)
    {
        four = true;
    }
    if (pair_count == 3)
    {
        three = true;
    }
    if (pair_count == 2)
    {
        pairs++;
    }
}

void print_result(void)
{
    if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four of a kind");
    else if (three && pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a kind");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");

    printf("\n\n");
}