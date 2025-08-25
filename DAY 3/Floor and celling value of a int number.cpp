#include <stdio.h>
#include <math.h>

int main() {
    double num;
    
    // Input from user
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);
    
    // Calculating floor and ceiling
    double floorValue = floor(num);
    double ceilValue = ceil(num);
    
    // Output the results
    printf("Number: %.2lf\n", num);
    printf("Floor value: %.2lf\n", floorValue);
    printf("Ceiling value: %.2lf\n", ceilValue);
    
    return 0;
}

