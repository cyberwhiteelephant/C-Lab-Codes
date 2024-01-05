// Write a C program to differentiate pass by value and pass by swapping two numbers using functions.

#include <stdio.h>

void swapByReference(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByValue(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int num1 = 5, num2 = 10;

    printf("Before swapping (pass by reference): num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapping (pass by reference): num1 = %d, num2 = %d\n\n", num1, num2);

    num1 = 5;
    num2 = 10;

    printf("Before swapping (pass by value): num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapping (pass by value): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
