#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

   
    if (a == b && b == c) {
        printf("All numbers are equal.\n");
    } else {
        
        int greatest;
        if (a > b && a > c)
            greatest = a;
        else if (b > a && b > c)
            greatest = b;
        else
            greatest = c;

        printf("The greatest number is %d\n", greatest);
    }

    
    if (a > 0 && b > 0 && c > 0) {
        printf("Entered numbers are all positive.\n");
    } else if (a < 0 && b < 0 && c < 0) {
        printf("Entered numbers are all negative.\n");
    } else {
        printf("Entered numbers are mixed numbers.\n");
    }

    return 0;
}

