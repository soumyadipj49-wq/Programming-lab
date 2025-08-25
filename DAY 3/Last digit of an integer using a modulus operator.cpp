#include <stdio.h>

int main() {
    int number, lastDigit;

    // Prompt user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Get the last digit using modulus operator
    lastDigit = number % 10;

    // Handle negative numbers
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }

    // Display the result
    printf("The last digit of %d is %d\n", number, lastDigit);

    return 0;
}

