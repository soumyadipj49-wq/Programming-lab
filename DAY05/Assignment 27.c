#include <stdio.h>

int main()
{
    char A;

    printf("Enter the letter: ");
    scanf(" %c", &A);  // Fix: Added space and &

    switch (A) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The letter is a vowel.\n");
            break;

        default:
            printf("The letter is a consonant.\n");
    }

    return 0;
}

