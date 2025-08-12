#include <stdio.h>

int main() {
    float num1, num2, difference;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    difference = num1 - num2;

    printf("Difference = %.2f\n", difference);

    return 0;
}