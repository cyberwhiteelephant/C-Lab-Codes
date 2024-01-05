// Write a C program to print the Fibonacci sequence using recursion.

#include <stdio.h>

int fibonacci(int n) 
{
    if (n <= 1) 
    {
        return n;
    } 
    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSequence(int terms) 
{
    printf("Fibonacci Sequence up to %d terms:\n", terms);
    for (int i = 0; i < terms; ++i) 
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() 
{
    int terms;

    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &terms);

    printFibonacciSequence(terms);

    return 0;
}
