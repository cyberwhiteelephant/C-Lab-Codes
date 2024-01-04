// Write a C program to print the factorial of a given number using for-loop. Factorial of 5 is 120.

#include <stdio.h>

unsigned long long factorial(int n) 
{
    unsigned long long result = 1;
    
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    
    return result;
}

int main() 
{
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        printf("Factorial of %d is %llu.\n", number, factorial(number));
    }
    
    return 0;
}
