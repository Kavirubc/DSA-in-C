#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4};
    printf("Size of array = %d\n", sizeof(arr));
    printf("Size of element 1 = %d\n", sizeof(arr[0]));
    printf("No of elements = %d\n", sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("Element no %d = %d\n", i + 1, arr[i]);
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[i]); i++)
    {
        printf("Size of element %d = %d\n", i + 1, sizeof(arr[0]));
    }
    return 0;
}