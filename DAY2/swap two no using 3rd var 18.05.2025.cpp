#include <stdio.h>

int main() {
    int a, b, temp;


    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

  
    printf("After swapping:\n");
    printf("First number (a) = %d\n", a);
    printf("Second number (b) = %d\n", b);

    return 0;
}

