#include <stdio.h>

int main() {
    int i,n;
    unsigned long long factorial = 1; 

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; 
    }

    
    for ( i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d is: %llu\n", n, factorial);

    return 0;
}

