#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the character array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the character array
    char* arr = (char*)malloc(n * sizeof(char));

    // Initialize the array elements with lowercase alphabetical characters
    for (int i = 0; i < n; i++) {
        arr[i] = 'a' + i;
    }

    // Print the array
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }

    // Resize the array to double its size
    arr = (char*)realloc(arr, 2 * n * sizeof(char));

    // Initialize the additional elements with consecutive uppercase alphabetical characters
    for (int i = n; i < 2 * n; i++) {
        arr[i] = 'A' + (i - n);
    }

    // Print the resized array
    for (int i = 0; i < 2 * n; i++) {
        printf("%c ", arr[i]);
    }

    // Free the dynamically allocated memory for the character array
    free(arr);

    // Prompt the user to enter floating-point numbers
    printf("\nEnter a series of floating-point numbers separated by spaces: ");
    int numCount = 0;
    double* doubleArr = (double*)calloc(n, sizeof(double));

    // Read the entered numbers and store them in the double array
    while (numCount < n && scanf("%lf", &doubleArr[numCount]) == 1) {
        numCount++;
    }

    // Print the entered numbers
    printf("Entered numbers: ");
    for (int i = 0; i < numCount; i++) {
        printf("%lf ", doubleArr[i]);
    }

    // Free the dynamically allocated memory for the double array
    free(doubleArr);

    return 0;
}
