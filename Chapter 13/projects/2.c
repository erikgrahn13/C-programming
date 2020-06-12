#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[6], msg_str[MSG_LEN+1];
    char time_str[6];
    int day, i, j, num_remind = 0;
    int month = 0;
    int hours = 0;
    int minutes = 0;

    for(;;)
    {
        if(num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d/%2d", &month, &day);

        if(month == 0)
        {
            break;
        }
        else if(month < 0 || month > 12)
        {
            printf("error: Invalid month\n");
            while(getchar() != '\n');
            continue;
        }
        else if(day <= 0 || day > 31)
        {
            printf("error: Invalid day\n");         
            while(getchar() != '\n');
            continue;
        }
        sprintf(day_str, "%2d/%2d", month, day);
        getchar();
        scanf("%2d", &hours);
        getchar();
        scanf("%2d", &minutes);

        if(hours < 0 || hours > 24 || minutes < 0 || minutes > 60)
        {
            printf("error: Invalid time\n");
            while(getchar() != '\n');
            continue;
        }
        sprintf(time_str, "%2d:%02d", hours, minutes);
        read_line(msg_str, MSG_LEN);


        char day_tmp[6];
        for(i = 0; i < num_remind; i++)
        {
             day_tmp[0] = reminders[i][0];
             day_tmp[1] = reminders[i][1];
             day_tmp[2] = reminders[i][2];
             day_tmp[3] = reminders[i][3];
             day_tmp[4] = reminders[i][4];
             day_tmp[5] = '\0';
            
            if(strcmp(day_str, day_tmp) < 0)
            {
                break;
            }
            else if(strcmp(day_str, day_tmp) == 0)
            {
                printf("Lika\n");
                char time_tmp[6];
                time_tmp[0] = reminders[i][6];
                time_tmp[1] = reminders[i][7];
                time_tmp[2] = reminders[i][8];
                time_tmp[3] = reminders[i][9];
                time_tmp[4] = reminders[i][10];
                time_tmp[5] = '\0';

                printf("time_str: %s     time_tmp: %s\n", time_str, time_tmp);
                if(strcmp(time_str, time_tmp) < 0)
                {
                    break;
                }
            }
        }
        for(j = num_remind; j > i; j--)
        {
            strcpy(reminders[j], reminders[j-1]);
        }
        
        strcpy(reminders[i], day_str);
        strcat(reminders[i], " ");
        strcat(reminders[i], time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for(i = 0; i < num_remind; i++)
    {
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}