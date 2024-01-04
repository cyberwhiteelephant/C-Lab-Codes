// Write a C program to find the maximum elements and index in the array.

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int maxElement = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > maxElement) 
        {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    printf("Maximum Element: %d\n", maxElement);
    printf("Index of Maximum Element: %d\n", maxIndex);

    return 0;
}
