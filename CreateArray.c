#include <stdio.h>

int main()
{
    int n, m, k;
    float mean, sum;
    printf("Enter the number of elements: ");
    scanf("%i", &n);
    int *num[n];

    for (m = 0; m < n; m++)
    {
        printf("Enter the numbers: ");
        scanf("%i", num[m]);
    }

    for (k = 0; k < n; k++)
    {
        sum = 0;
        sum = sum + *num[k];
    }

    mean = sum / n;

    printf("Mean is: %f", mean);
}