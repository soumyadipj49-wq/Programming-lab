#include <stdio.h>

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check if Buzz number or not\n");
    printf("2. Check if Even or Odd\n");
    printf("3. Check if Positive or Negative\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (num % 7 == 0 || num % 10 == 7)
                printf("%d is a Buzz number.\n", num);
            else
                printf("%d is not a Buzz number.\n", num);
            break;

        case 2:
            if (num % 2 == 0)
                printf("%d is Even.\n", num);
            else
                printf("%d is Odd.\n", num);
            break;

        case 3:
            if (num > 0)
                printf("%d is Positive.\n", num);
            else if (num < 0)
                printf("%d is Negative.\n", num);
            else
                printf("The number is Zero.\n");
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0;
}

