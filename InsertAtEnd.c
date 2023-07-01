#include <stdio.h>
int main()
{
    int arr[3] = {1, 2, 3};
    int size, n;

    size = sizeof(arr) / sizeof(arr[0]);
    int newValue = 9;

    int arr1[size + 1];

    for (n = 0; n < size; n++)
    {
        arr1[n] = arr[n];
    }
    arr1[size] = newValue;
    for (n = 0; n < size + 1; n++)
    {
        printf("%i", arr1[n]);
    }
    return 0;
}