#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
    extern int stack[];
    for (int i = 0; i < STACK_SIZE; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\nEnter an RPN expression: ");

    char ch;
    scanf(" %c", &ch);

    while (ch != '\n')
    {

        if (ch == '=')
        {
            printf("Value of expression: %d\n", pop());
            make_empty();
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            int operand1 = pop();
            int operand2 = pop();
            int result = 0;
            switch (ch)
            {
            case '+':
                result = operand2 + operand1;
                break;
            case '-':
                result = operand2 - operand1;
                break;
            case '*':
                result = operand2 * operand1;
                break;
            case '/':
                result = operand2 / operand1;
            default:
                break;
            }
            push(result);
        }
        else if (ch >= 48 && ch <= 57)
        {
            push(ch - 48);
        }
        else
        {
            exit(EXIT_SUCCESS);
        }

        if (is_empty())
        {
            printf("Enter an RPN expression: ");
            scanf(" %c", &ch);
        }
        else
        {
            scanf(" %c", &ch);
        }
    }

    return 0;
}