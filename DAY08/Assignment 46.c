#include <stdio.h>

int sumEvenNumbers(int n);

int main() {
    int n = 10;
    int sum;

    sum = sumEvenNumbers(n);

    printf("The sum of the first %d even natural numbers is: %d\n", n, sum);

    return 0;
}

int sumEvenNumbers(int n) {
    int i, sum = 0;
    for(i = 1; i <= n; i++) {
        sum = sum + 2 * i;  
    }
    return sum;
}

