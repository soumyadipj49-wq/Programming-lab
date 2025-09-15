#include <stdio.h>

int main() {
    int n, i, first = 0, second = 1, next_term;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:");
    if (n <= 0) {
        printf("Invalid input for number of terms.\n");
    } else if (n == 1) {
        printf("%d\n", first);
    } else {
    
        printf("%d, %d, ", first, second);

        for (i = 3; i <= n; i++) {
            next_term = first + second;
            printf("%d, ", next_term);
            first = second;
            second = next_term;
        }
        printf("\n"); 
    }

    return 0;
}
