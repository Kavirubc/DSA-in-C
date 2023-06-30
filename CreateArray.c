#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    float mean, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%i", &n);
    int *num[n];

    for (m = 0; m < n; m++)
    {
        printf("Enter the numbers: ");
        num[m] = malloc(sizeof(int)); // Allocate memory for each integer
        scanf("%i", num[m]); //Do not use & sign .
        sum += *num[m]; //Have to access the value inside the array not the pointer so * has to be used.
    }

    mean = sum / n;
    printf("Sum is: %f\n", sum);
    printf("Mean is: %f\n", mean);
    for (m = 0; m < n; m++) //use this instead of clearing the whole array. don't know whether this is right or wrong. 
    {
        free(num[m]); // Free the allocated memory
    }
}