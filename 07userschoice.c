// Write a C program to calculate area and perimeter of circle, square and rectangle based on user's choice.

#include <stdio.h>

#define PI 3.14159

float calculateCircleArea(float radius);
float calculateCirclePerimeter(float radius);
float calculateSquareArea(float side);
float calculateSquarePerimeter(float side);
float calculateRectangleArea(float length, float width);
float calculateRectanglePerimeter(float length, float width);

int main() 
{
    int choice;
    
    do 
    {
        printf("Choose a shape to calculate area and perimeter:\n");
        printf("1. Circle\n");
        printf("2. Square\n");
        printf("3. Rectangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) 
        {
            case 1: 
            {
                float radius;
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);

                float area = calculateCircleArea(radius);
                float perimeter = calculateCirclePerimeter(radius);

                printf("Area of the circle: %.2f\n", area);
                printf("Perimeter of the circle: %.2f\n", perimeter);
                break;
            }
            case 2: 
            {
                float side;
                printf("Enter the side of the square: ");
                scanf("%f", &side);

                float area = calculateSquareArea(side);
                float perimeter = calculateSquarePerimeter(side);

                printf("Area of the square: %.2f\n", area);
                printf("Perimeter of the square: %.2f\n", perimeter);
                break;
            }
            case 3: 
            {
                float length, width;
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);

                float area = calculateRectangleArea(length, width);
                float perimeter = calculateRectanglePerimeter(length, width);

                printf("Area of the rectangle: %.2f\n", area);
                printf("Perimeter of the rectangle: %.2f\n", perimeter);
                break;
            }
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

float calculateCircleArea(float radius) 
{
    return PI * radius * radius;
}

float calculateCirclePerimeter(float radius) 
{
    return 2 * PI * radius;
}

float calculateSquareArea(float side) 
{
    return side * side;
}

float calculateSquarePerimeter(float side) 
{
    return 4 * side;
}

float calculateRectangleArea(float length, float width) 
{
    return length * width;
}

float calculateRectanglePerimeter(float length, float width) 
{
    return 2 * (length + width);
}
