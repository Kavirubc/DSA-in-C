#include <stdio.h>
#include <stdbool.h>
#include "func.h"

int main()
{
    char input[100];
    printf("Enter the input string: ");
    scanf("%s", input);

    if (isBracketValid(input))
    {
        printf("Input: \"%s\" Output: Valid\n", input);
    }
    else
    {
        printf("Input: \"%s\" Output: Not Valid\n", input);
    }

    return 0;
}