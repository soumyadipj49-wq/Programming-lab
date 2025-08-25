#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, realPart, imaginaryPart;
    
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if it is a quadratic equation
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    printf("\n");

    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Real Roots:\n");
        if (root1 > 0)
            printf("Positive Root: %.2lf\n", root1);
        if (root2 > 0)
            printf("Positive Root: %.2lf\n", root2);
        if (root1 <= 0 && root2 <= 0)
            printf("No positive real roots.\n");

    } else if (discriminant == 0) {
        // One real root
        double root = -b / (2 * a);
        printf("Single Real Root:\n");
        if (root > 0)
            printf("Positive Root: %.2lf\n", root);
        else
            printf("No positive real root.\n");

    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Complex Roots:\n");

        // Check if real part is positive
        if (realPart > 0) {
            printf("Positive Complex Root 1: %.2lf + %.2lfi\n", realPart, imaginaryPart);
            printf("Positive Complex Root 2: %.2lf - %.2lfi\n", realPart, imaginaryPart);
        } else {
            printf("No positive complex roots (real part not positive).\n");
        }
    }

    return 0;
}

