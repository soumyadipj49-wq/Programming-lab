#include <stdio.h>
int main() {
    int a;
    printf("Enter Year: ");
    scanf("%d", &a);

    if (a % 400 == 0) {
        printf("The year is Leap Year\n");
    } else if (a % 100 == 0) {
        printf("The year is not Leap Year\n");
    } else if (a % 4 == 0) {
        printf("The year is Leap Year\n");
    } else {
        printf("The year is not Leap Year\n");
    }

    return 0;
}

