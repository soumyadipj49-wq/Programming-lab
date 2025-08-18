#include<stdio.h>
int main() {
    float a,b,c;
    printf("Enter The First Number:");
    scanf("%f", &a);
    printf("Enter The 2nd Number:");
    scanf("%f", &b);
    printf("a is %f and b is %f\n", a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping a is %f and b is %f", a,b);
    return 0;
}