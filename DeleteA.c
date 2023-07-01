#include <stdio.h>

void delete(int pos, int arr[], int size)
{
    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
void print(int arr[], int size)
{
    for (int m = 0; m < size - 1; m++)
    {
        printf("%i\n", arr[m]);
    }
}

int main()
{
    int pos;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the position to delete: ");
    scanf("%i", &pos);
    delete (pos, arr, size);
    print(arr, size);
    return 0;
}