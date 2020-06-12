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

int evaluate_RPN_expression(const char *expression)
{
    const char *p = expression;

    while (*p != '\0')
    {
        if (*p == ' ')
        {
            p++;
            continue;
        }
        else if (*p == '=')
        {
            int value = pop();
            make_empty();
            return value;
        }
        else if (*p == '+' || *p == '-' || *p == '*' || *p == '/')
        {
            int operand1 = pop();
            int operand2 = pop();
            int result = 0;
            switch (*p)
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
        else if (*p >= 48 && *p <= 57)
        {
            push(*p - 48);
        }
        else
        {
            exit(EXIT_SUCCESS);
        }

        p++;
    }
}

int main(void)
{

    char ch[STACK_SIZE];

    while (is_empty())
    {
        printf("\nEnter an RPN expression: ");

        gets(ch);
        printf("Value of expression: %d\n", evaluate_RPN_expression(ch));
    }

    return 0;
}