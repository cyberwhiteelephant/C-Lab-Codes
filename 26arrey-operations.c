// Write a C program to implement the array of structure for student marks for each student and pass it to function for various operations. 

#include <stdio.h>

struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};

void inputStudentDetails(struct Student *student, int n) 
{
    for (int i = 0; i < n; ++i) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", student[i].name);
        printf("Roll Number: ");
        scanf("%d", &student[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &student[i].marks);
    }
}

void displayStudentDetails(struct Student *student, int n) 
{
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; ++i) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", student[i].name);
        printf("Roll Number: %d\n", student[i].rollNumber);
        printf("Marks: %.2f\n", student[i].marks);
        printf("\n");
    }
}

float calculateAverageMarks(struct Student *student, int n) 
{
    float totalMarks = 0;
    for (int i = 0; i < n; ++i) 
    {
        totalMarks += student[i].marks;
    }
    return totalMarks / n;
}

int main() 
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    inputStudentDetails(students, n);

    displayStudentDetails(students, n);

    float averageMarks = calculateAverageMarks(students, n);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
