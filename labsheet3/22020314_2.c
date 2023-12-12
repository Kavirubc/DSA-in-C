#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[30];
    int mark;
};

int main()
{
    // Part 1

    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);

    struct Student *stu;
    stu = calloc(num, sizeof(struct Student));

    for (int i = 0; i < num; i++)
    {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", stu[i].name);
        printf("Enter marks: ");
        scanf("%d", &stu[i].mark);
    }

    for (int i = 0; i < num; i++)
    {
        printf("Student %d - Name: %s, Marks: %d\n", i + 1, stu[i].name, stu[i].mark);
    }

    // Part 2

    int num2;
    printf("Do you want to add more students? Enter the number of additional students: ");
    scanf("%d", &num2);

    stu = (struct Student *)realloc(stu, (num2 + num) * sizeof(struct Student));

    for (int i = 0; i < num2; i++)
    {
        printf("Enter details for Student %d:\n", i + num + 1);
        printf("Enter name: ");
        scanf("%s", stu[i + num].name);
        printf("Enter marks: ");
        scanf("%d", &stu[i + num].mark);
    }

    printf("Details after adding %d more students\n", num2);

    for (int i = 0; i < num + num2; i++)
    {
        printf("Student %d - Name: %s, Marks: %d\n", i + 1, stu[i].name, stu[i].mark);
    }

    free(stu);

    return 0;
}