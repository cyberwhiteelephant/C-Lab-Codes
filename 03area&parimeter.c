// Write a C program to calculate the area and perimeter of circle, square and rectangle.

#include <stdio.h>
#include <math.h>

double calculateCircleArea(double radius);
double calculateCirclePerimeter(double radius);
double calculateSquareArea(double side);
double calculateSquarePerimeter(double side);
double calculateRectangleArea(double length, double width);
double calculateRectanglePerimeter(double length, double width);

int main() 
{
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Circle Area: %.2lf\n", calculateCircleArea(radius));
    printf("Circle Perimeter: %.2lf\n", calculateCirclePerimeter(radius));

    double side;
    printf("\nEnter the side of the square: ");
    scanf("%lf", &side);

    printf("Square Area: %.2lf\n", calculateSquareArea(side));
    printf("Square Perimeter: %.2lf\n", calculateSquarePerimeter(side));

    double length, width;
    printf("\nEnter the length and width of the rectangle (separated by space): ");
    scanf("%lf %lf", &length, &width);

    printf("Rectangle Area: %.2lf\n", calculateRectangleArea(length, width));
    printf("Rectangle Perimeter: %.2lf\n", calculateRectanglePerimeter(length, width));

    return 0;
}


double calculateCircleArea(double radius) 
{
    return M_PI * pow(radius, 2);
}

double calculateCirclePerimeter(double radius) 
{
    return 2 * M_PI * radius;
}

double calculateSquareArea(double side) 
{
    return pow(side, 2);
}

double calculateSquarePerimeter(double side) 
{
    return 4 * side;
}

double calculateRectangleArea(double length, double width) 
{
    return length * width;
}

double calculateRectanglePerimeter(double length, double width) 
{
    return 2 * (length + width);
}
