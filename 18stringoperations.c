// Write a C program to demonstrate various string operations.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[50] = "Hello";
    char str2[50] = "World";

    printf("Length of str1: %lu\n", strlen(str1));

    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    char str3[50];
    strcpy(str3, str1);
    printf("Copied string (str3): %s\n", str3);

    int result = strcmp(str1, str2);
    if (result == 0) 
    {
        printf("str1 and str2 are equal.\n");
    } 
    else if (result < 0) 
    {
        printf("str1 is lexicographically smaller than str2.\n");
    } 
    else 
    {
        printf("str1 is lexicographically larger than str2.\n");
    }

    return 0;
}
