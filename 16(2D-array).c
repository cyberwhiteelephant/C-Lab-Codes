// Write a C program to read and print elements in 2D - arrays.

#include <stdio.h>

#define MAX_ROWS 3
#define MAX_COLS 3

int main() 
{
    int matrix[MAX_ROWS][MAX_COLS];
    int i, j;

    printf("Enter elements for the 2D array (%d x %d):\n", MAX_ROWS, MAX_COLS);
    for (i = 0; i < MAX_ROWS; i++) 
    {
        for (j = 0; j < MAX_COLS; j++) 
        {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nElements in the 2D array are:\n");
    for (i = 0; i < MAX_ROWS; i++) 
    {
        for (j = 0; j < MAX_COLS; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
