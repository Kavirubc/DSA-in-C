#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int num)
{
    int arr[num];
    for (int b = 0; b < 2 * num - 1; b++)
    {
        for (int a = 0; a < 2 * num - 1; a++)
        {
            int m = 0;
            if ((num - m) > 1)
            {
                arr[a] = num - m;
                m++;
            }
            else
            {
                arr[a] = num + m;
                m++;
            }
        }
    }

    for (int m = 0; m < num; m++)
    {
        printf("%i", arr[m]);
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%i", &num);
    print(num);
    return 0;
}