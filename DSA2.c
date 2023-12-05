#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4};
    long *arrPtr = &arr;
    long *arrElPtr = &arr[0];
    printf("Memory address of the array = %d\n", &arr);
    printf("Memory address of the first element of the array = %d\n", &arr[0]);

    if (arrPtr == arrPtr)
    {
        printf("Thy are same\n");
    }
    else
        printf("Thy are not same\n");

    // Get pointer values for all elements

    int arr1[4];

    for (int i = 0; i < 4; i++)
    {
        int *ptr1 = &arr[i];
        // printf("%p",ptr1);
        arr1[i] = ptr1;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Element %d of the array = %p\n", i + 1, arr1[i]);
    }

    return 0;
}