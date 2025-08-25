#include <stdio.h>

int main() {
    int number, lastDigit;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Get the last digit without using modulus operator
    lastDigit = number - (number / 10) * 10;

    // Handle negative last digit
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }

    // Print the result
    printf("The last digit of %d is %d\n", number, lastDigit);

    return 0;
}

