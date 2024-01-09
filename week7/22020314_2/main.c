#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "data.bin";
    int offset;
    int charsize = 512;
    char buffer[charsize];

        file = fopen(filename, "rb+");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }


    printf("Content of the file before modification:\n");
    while (fread(buffer, sizeof(char), charsize, file) == charsize) {
        printf("%s", buffer);
    }
    printf("\n");


    printf("Enter the offset (in bytes) to modify: ");
    scanf("%d", &offset);
    fseek(file, offset, SEEK_SET);

    printf("Enter the new data (up to %d characters): ", charsize);
    scanf(" %[^\n]", buffer);


    fwrite(buffer, sizeof(char), charsize, file);


    fseek(file, 0, SEEK_SET);
    printf("Content of the file after modification:\n");
    while (fread(buffer, sizeof(char), charsize, file) == charsize) {
        printf("%s", buffer);
    }
    printf("\n");


    fclose(file);

    return 0;
}
