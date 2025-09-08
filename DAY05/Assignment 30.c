#include <stdio.h>

int main() {
    int marks;

    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    } else {
        switch (marks / 10) {
            case 10: 
            case 9:  
                if (marks >= 95) {
                    printf("Grade: A+\n");
                } else {
                    printf("Grade: A\n");
                }
                break;

            case 8: 
                printf("Grade: B\n");
                break;

            case 7: 
                printf("Grade: C\n");
                break;

            default: 
                printf("Grade: F\n");
                break;
        }
    }

    return 0;
}

