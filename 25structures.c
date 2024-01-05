// Write a C program to store the information of students marks using structures and find total marks of individual students.

#include <stdio.h>

struct Student 
{
    char name[50];
    int marks[5]; 
    int totalMarks;
};

void calculateTotalMarks(struct Student *student) 
{
    student->totalMarks = 0;
    for (int i = 0; i < 5; i++) 
    {
        student->totalMarks += student->marks[i];
    }
}

int main() 
{
    struct Student students[3];

    for (int i = 0; i < 3; i++) 
    {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) 
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }

        calculateTotalMarks(&students[i]);
    }

    printf("\nTotal marks for each student:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("Student %d (%s): %d\n", i + 1, students[i].name, students[i].totalMarks);
    }

    return 0;
}
