#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    while (num >= 0)
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("%d\n", sum - num);
}