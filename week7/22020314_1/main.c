#include <stdio.h>

int main()
{
    FILE *inputFile, *evenFile, *oddFile;
    int num;

    inputFile = fopen("input.txt", "r");

    evenFile = fopen("even_numbers.txt", "w");

    oddFile = fopen("odd_numbers.txt", "w");

    while (fscanf(inputFile, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            fprintf(evenFile, "%d\n", num);
        }
        else
        {
            fprintf(oddFile, "%d\n", num);
        }
    }

    fclose(inputFile);
    fclose(evenFile);
    fclose(oddFile);

    evenFile = fopen("even_numbers.txt", "r");

    printf("Content of even_numbers.txt:\n");
    while (fscanf(evenFile, "%d", &num) != EOF)
    {
        printf("%d\n", num);
    }
    fclose(evenFile);

    oddFile = fopen("odd_numbers.txt", "r");

    printf("Content of odd_numbers.txt:\n");
    while (fscanf(oddFile, "%d", &num) != EOF)
    {
        printf("%d\n", num);
    }
    fclose(oddFile);

    return 0;
}
