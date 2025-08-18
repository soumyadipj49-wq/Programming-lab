#include <stdio.h>

int main() {
    int a, b;

    
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    a = a + b;  
    b = a - b;  
    a = a - b;  

    
    printf("After swapping:\n");
    printf("First number (a) = %d\n", a);
    printf("Second number (b) = %d\n", b);

    return 0;
}

