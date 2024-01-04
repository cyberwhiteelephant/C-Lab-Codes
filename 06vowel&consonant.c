// Write a C program to check whether the alphabet is a vowel or constant.

#include <stdio.h>

int main() {
    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) 
    {
        if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
            alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') 
            {
            printf("%c is a vowel.\n", alphabet);
        } 
        else 
        {
            printf("%c is a consonant.\n", alphabet);
        }
    } 
    else 
    {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
