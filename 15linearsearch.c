// Write a C program to find an element in array using linear search.

#include <stdio.h>

int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            return i; 
        }
    }
    return -1; 
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result != -1) 
    {
        printf("Element %d found at index %d\n", key, result);
    } 
    else 
    {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
