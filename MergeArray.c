#include <stdio.h>
void merge(int arr1[], int arr2[], int size1, int size2, int arr[])
{

    for (int i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++)
    {
        arr[j + size1] = arr2[j];
    }
}

void print(int arr1[], int arr2[], int size1, int size2, int arr[])
{
    for (int m = 0; m < (size1 + size2); m++)
    {
        printf("%i\n", arr[m]);
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr[size1 + size2];
    merge(arr1, arr2, size1, size2, arr);
    print(arr1, arr2, size1, size2, arr);
}