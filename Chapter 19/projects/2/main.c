#include <stdio.h>
#include <stdlib.h>

#include "2.h"

int main(void)
{
    Stack stack = create();
    
    printf("\nEnter an RPN expression: ");

    char ch;
    scanf(" %c", &ch);

    while (ch != '\n')
    {

        if (ch == '=')
        {
            printf("Value of expression: %d\n", pop(stack));
            make_empty(stack);
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            int operand1 = pop(stack);
            int operand2 = pop(stack);
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
            push(stack, result);
        }
        else if (ch >= 48 && ch <= 57)
        {
            push(stack, ch - 48);
        }
        else
        {
            exit(EXIT_SUCCESS);
        }

        if (is_empty(stack))
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