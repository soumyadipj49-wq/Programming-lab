#include<stdio.h>
int main() {
    printf("Enter Your Principle Amount:");
    float p,r,t;
    scanf("%f",&p);
    printf("Enter The rate of interest per annum:");
    scanf("%f",&r);
    printf("Enter Your Time Period:");
    scanf("%f",&t);
    printf("Your Simple Interest Value is: %f", (p*r*t/100));
    return 0;
}