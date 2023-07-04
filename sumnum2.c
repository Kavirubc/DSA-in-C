#include <stdio.h>
int main()
{
    int num = 0;
    int sum = 0;
    while (num >= 0)
    {
        sum = sum + num;
        printf("Enter the number: ");
        scanf("%d", &num);
    }
    printf("%d\n", sum);
    return 0;
}