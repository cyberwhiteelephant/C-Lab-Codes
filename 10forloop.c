// Write a C program to find maximum of n number using for loop.

#include <stdio.h>

int main() 
{
    int n, i;
    int num, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter element 1: ");
    scanf("%d", &max);

    for (i = 2; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &num);

        if (num > max) 
        {
            max = num;
        }
    }

    printf("Maximum number is: %d\n", max);

    return 0;
}
