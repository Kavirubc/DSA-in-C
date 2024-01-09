#include <stdio.h>

int main()
{
    FILE *file;
    int charsize = 128;
    char buffer[charsize];

    file = fopen("text.txt", "r");

    while (fread(buffer, sizeof(char), charsize, file) > 0)
    {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}
