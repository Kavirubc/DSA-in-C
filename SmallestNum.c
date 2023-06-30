// Write a program to print the position of the smallest number of n numbers using arrays.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Enter the number of inputs: ");
    scanf("%i", &n);
    int arr[n];

    for (m = 0; m < n; m++)
    {
        printf("Enter the number %i: ", m + 1);
        scanf("%i", &arr[m]);
    }

    int small = arr[0];
    for (int i = 1; i < n + 1; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
        printf("Smallest value: %i", small);
        return 0;
    }
}