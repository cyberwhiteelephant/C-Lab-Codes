// Write a c program for arithmetic operations like addition, subtraction, multiplication, division.

#include <stdio.h>

int main() 
{
    double num1, num2;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);

    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);

    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2)

    if (num2 != 0) 
    {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } 
    else 
    {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
