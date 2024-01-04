// Write a C program to find Fibonacci Series.

#include <stdio.h>

void generateFibonacci(int n) 
{
    int first = 0, second = 1, next;

    printf("Fibonacci Series for %d terms: \n", n);

    for (int i = 0; i < n; i++) 
    {
        if (i <= 1)
            next = i;
        else 
        {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }
}

int main() 
{
    int terms;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) 
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; 
    }

    generateFibonacci(terms);

    return 0; 
}
