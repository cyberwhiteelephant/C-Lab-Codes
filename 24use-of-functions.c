// Write a C program to demonstrate the use of malloc(), callop(), realia() and free() function.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *ptr_malloc = (int *)malloc(sizeof(int));
    
    if (ptr_malloc == NULL) 
    {
        printf("Memory allocation using malloc() failed.\n");
        return 1;
    }
    
    *ptr_malloc = 42;
    printf("Value assigned using malloc(): %d\n", *ptr_malloc);
    
    int *ptr_calloc = (int *)calloc(5, sizeof(int));
    
    if (ptr_calloc == NULL) 
    {
        printf("Memory allocation using calloc() failed.\n");
        free(ptr_malloc);  
        return 1;
    }
    
    printf("Values assigned using calloc(): ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", ptr_calloc[i]);
    }
    printf("\n");
    
    int *ptr_realloc = (int *)realloc(ptr_calloc, 10 * sizeof(int));
    
    if (ptr_realloc == NULL) 
    {
        printf("Memory reallocation using realloc() failed.\n");
        free(ptr_malloc);
        free(ptr_calloc);
        return 1;
    }
    
    printf("Values after realloc(): ");
    for (int i = 0; i < 10; ++i) 
    {
        printf("%d ", ptr_realloc[i]);
    }
    printf("\n");
    
    free(ptr_malloc);
    free(ptr_realloc);

    return 0;
}
