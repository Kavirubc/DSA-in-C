#include <stdio.h>

//In my laptop <CONIO.h> was not working so had to follow this method instead of EOF

int main() {
    FILE *file;
    char line[100];

    file = fopen("Names.txt", "r");

    
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
