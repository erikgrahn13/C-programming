#include <stdio.h>

int main(void)
{
    int i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enternumber of entries in table: ");

    scanf("%d", &n);
    getchar();
    for(i = 1; i <= n; i++)
    {
        
        if(i % 24 == 0)
        {
            
            printf("Press Enter to continue...");
            while(getchar() != '\n'){}
                
        }


        printf("%10d%10d\n", i, i*i);
    }

    return 0;
}

// 46340 is the largest number before it wraps around   
// My computer has 32-bit int.