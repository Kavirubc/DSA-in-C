#include <stdio.h>
#include <stdlib.h>

// Assigning values

int main()
{
    // Q1
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    char *arr;
    arr = (char *)malloc(n * sizeof(char));

    for (int i = 0; i < n; i++)
    {
        arr[i] = 'a' + i;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c ", arr[i]);
    }

    printf("\n");

    // Q2
    arr = (char *)realloc(arr, 2 * n * sizeof(char));

    for (int i = 0; i < n; i++)
    {
        arr[i + n] = 'A' + i;
    }

    for (int i = 0; i < 2 * n; i++)
    {
        printf("%c ", arr[i]);
    }

    printf("\n");
    // Q3
    int l;
    printf("Enter the number of doubles: ");
    scanf("%d", &l);

    double *arr1;
    arr1 = (double *)calloc(l, sizeof(double));

    printf("Enter the numbers: ");

    for (int i = 0; i < l; i++)
    {
        scanf("%lf", &arr1[i]);
    }

    for (int i = 0; i < l; i++)
    {
        printf("%lf ", arr1[i]);
    }
    // Q4
    free(arr);
    free(arr1);

    return 0;
}