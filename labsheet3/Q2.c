#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

/**
 * This program allows the user to enter details of multiple students,
 * dynamically allocate memory to store the student information,
 * and add additional students if desired.
 */

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Dynamically allocate memory for the students array
    struct Student *students = (struct Student *)calloc(numStudents, sizeof(struct Student));

    // Prompt the user to enter details for each student
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("Entered details for %d persons:\n", numStudents);
    // Display the details of each student
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d - Name: %s, Marks: %d\n", i + 1, students[i].name, students[i].marks);
    }

    int additionalStudents;
    printf("Do you want to add more students? Enter the number of additional students: ");
    scanf("%d", &additionalStudents);

    // Resize the students array to accommodate additional students
    students = (struct Student *)realloc(students, (numStudents + additionalStudents) * sizeof(struct Student));

    // Prompt the user to enter details for the additional students
    for (int i = numStudents; i < numStudents + additionalStudents; i++) {
        printf("Enter details for additional Student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("Details after adding %d more student(s):\n", additionalStudents);
    // Display the details of all students, including the additional ones
    for (int i = 0; i < numStudents + additionalStudents; i++) {
        printf("Student %d - Name: %s, Marks: %d\n", i + 1, students[i].name, students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
