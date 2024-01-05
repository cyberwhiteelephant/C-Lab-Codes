// Write a C program to store information of a student using union.

#include <stdio.h>

union StudentInfo 
{
    int rollNumber;
    float marks;
    char grade;
};

struct Student 
{
    char name[50];
    int age;
    union StudentInfo info;  
};

int main() 
{
    struct Student student1 = {"John", 20, {101, 85.5, 'A'}};

    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);

    printf("Student Roll Number: %d\n", student1.info.rollNumber);
    printf("Student Marks: %.2f\n", student1.info.marks);
    printf("Student Grade: %c\n", student1.info.grade);

    return 0;
}
