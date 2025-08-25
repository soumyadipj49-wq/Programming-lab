#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compoundInterest;

    // Input principal, rate and time
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);

    // Calculate final amount using compound interest formula
    amount = principal * pow((1 + rate / 100), time);

    // Calculate compound interest
    compoundInterest = amount - principal;

    // Output results
    printf("Compound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}

