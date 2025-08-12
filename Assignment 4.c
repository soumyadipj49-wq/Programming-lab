#include <stdio.h>

void printTable(int num, int i) {
    if (i > 10) // base condition
        return;
    printf("%d x %d = %d\n", num, i, num * i);
    printTable(num, i + 1); // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printTable(num, 1);
    return 0;
}