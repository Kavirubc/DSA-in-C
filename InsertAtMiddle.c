#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 4, 5};
    int size, n, m;
    size = sizeof(arr) / sizeof(arr[0]);

    int arr1[size + 1];
    int newValue = 3;

    for (n = 0; n < 2; n++)
    {
        arr1[n] = arr[n];
    }
    // printf("%i",n);
    arr1[n] = newValue;

    for (m = n + 1; m < size + 1; m++)
    {
        arr1[m] = arr[m - 1];
    }
    int l;
    for (l = 0; l < size + 1; l++)
    {
        printf("%i\n", arr1[l]);
    }
    return 0;
}