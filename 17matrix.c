// Write a C program to find matrix multiplication.

#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int firstMatrix[MAX_SIZE][MAX_SIZE], int secondMatrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowsFirst, int columnsFirst, int rowsSecond, int columnsSecond);

int main() 
{
    int firstMatrix[MAX_SIZE][MAX_SIZE], secondMatrix[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rowsFirst, columnsFirst, rowsSecond, columnsSecond;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowsFirst, &columnsFirst);

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rowsFirst; ++i) 
    {
        for (int j = 0; j < columnsFirst; ++j) 
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowsSecond, &columnsSecond);

    if (columnsFirst != rowsSecond) 
    {
        printf("Error! Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rowsSecond; ++i) 
    {
        for (int j = 0; j < columnsSecond; ++j) 
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, rowsFirst, columnsFirst, rowsSecond, columnsSecond);

    printf("\nResultant matrix after multiplication:\n");
    for (int i = 0; i < rowsFirst; ++i) 
    {
        for (int j = 0; j < columnsSecond; ++j) 
        {
            printf("%d  ", result[i][j]);
            if (j == columnsSecond - 1)
                printf("\n");
        }
    }

    return 0;
}

void multiplyMatrices(int firstMatrix[MAX_SIZE][MAX_SIZE], int secondMatrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowsFirst, int columnsFirst, int rowsSecond, int columnsSecond) {

    for (int i = 0; i < rowsFirst; ++i) 
    {
        for (int j = 0; j < columnsSecond; ++j) 
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < rowsFirst; ++i) 
    {
        for (int j = 0; j < columnsSecond; ++j) 
        {
            for (int k = 0; k < columnsFirst; ++k) 
            {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
