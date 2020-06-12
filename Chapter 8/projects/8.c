#include <stdio.h>
#include <limits.h>

int main(void)
{
    int number[5][5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter quiz grades for student %d: ", i + 1);
        scanf("%d %d %d %d %d", &number[i][0], &number[i][1], &number[i][2], &number[i][3], &number[i][4]);
    }

    int total_grades_student = 0;
    int high_score = 0;
    int low_score = INT_MAX;
    float average_quiz = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d, ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            total_grades_student += number[i][j];
        }
        printf("Total: %d, Average: %.1f\n", total_grades_student, (float)total_grades_student / 5);
        total_grades_student = 0;
    }

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            average_quiz += number[j][i];
            if (high_score < number[j][i])
            {
                high_score = number[j][i];
            }
            if (low_score > number[j][i])
            {
                low_score = number[j][i];
            }
        }

        printf("Quiz %d: Average = %.1f, High score = %d, Low score = %d\n", i + 1, average_quiz / 5, high_score, low_score);
        average_quiz = 0;
        high_score = 0;
        low_score = INT_MAX;
    }

    //printf("Average score for each quiz: \n");
    //printf("High score for each quiz: \n");
    //printf("Low score for each quiz: \n");
    // printf("\nColumn totals: ");
    // int column = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         column += number[j][i];
    //     }
    //     printf("%d ", column);
    //     column = 0;
    // }
    // printf("\n");

    return 0;
}