#include <stdio.h>

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print(int arr[], int size)
{
    for (int m = 0; m < size; m++)
    {
        printf("%i", arr[m]);
    }
}

int main()
{
    int arr[] = {4, 3, 2, 6, 7, 4, 9};
    int size;
    size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);
    print(arr, size);

    return 0;
}