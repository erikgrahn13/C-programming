#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 20

int stack[STACK_SIZE] = {0};
int top = 0;

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands\n");
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (!is_full())
    {
        stack[top++] = i;
    }
    else
    {
        stack_overflow();
    }
}

int pop(void)
{

    if (!is_empty())
    {
        return stack[--top];
    }
    else
    {
        stack_underflow();
    }
}

int main(void)
{
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