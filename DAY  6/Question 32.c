#include <stdio.h>

int main() {
    int i,n, sum = 0;
 
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }

    for ( i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

