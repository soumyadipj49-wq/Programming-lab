#include <stdio.h>

int main()
{
    float length, width, area, perimeter;

    // Take length from the user
    printf("Enter Length of the rectangle: ");
    scanf("%f", &length);

    // Take width from the user
    printf("Enter Width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area
    area = length * width;
    printf("The area of the rectangle is: %.2f\n", area);

    // Calculate perimeter
    perimeter = 2 * (length + width);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}

