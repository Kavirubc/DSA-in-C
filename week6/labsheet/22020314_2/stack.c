#include <stdio.h>
#include <stdbool.h>
#include "types.h"

void initializeStack()
{
    TOS = -1;
}

bool isEmpty()
{
    return TOS == -1;
}

bool isFull()
{
    return TOS == 100 - 1;
}

void push(char x)
{
    if (!isFull())
    {
        Stack[++TOS] = x;
    }
    else
    {
        printf("Stack is full\n");
    }
}

char pop()
{
    if (!isEmpty())
    {
        return Stack[TOS--];
    }
    else
    {
        printf("Stack is empty.\n");
        return '\0';
    }
}

bool isBracketPair(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isBracketValid(char *str)
{
    initializeStack();

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(str[i]);
        }
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (isEmpty() || !isBracketPair(Stack[TOS], str[i]))
            {
                return false;
            }
            pop();
        }
    }

    return isEmpty(); 
}