#include <stdio.h>

int main() {
    float basicSalary, hra = 0, ta = 0, da = 0, grossSalary = 0;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    if (basicSalary > 0) {
        if (basicSalary > 15000) {
            hra = 0.20 * basicSalary; 
        }

        ta  = 0.10 * basicSalary;
        da  = 0.05 * basicSalary;

        grossSalary = basicSalary + hra + ta + da;

        printf("\n--- Salary Breakdown ---\n");
        printf("Basic Salary : %.2f\n", basicSalary);
        printf("HRA (20%%)    : %.2f\n", hra);
        printf("TA (10%%)     : %.2f\n", ta);
        printf("DA (5%%)      : %.2f\n", da);
        printf("-------------------------\n");
        printf("Gross Salary : %.2f\n", grossSalary);
    } 
    else {
        printf("Invalid salary entered. Please enter a positive value.\n");
    }

    return 0;
}

