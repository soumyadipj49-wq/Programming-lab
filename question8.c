#include<stdio.h>

int main() {
    printf("Enter The Temperature in Celsius that You Want in Fahrenheit:");
    float c,f;
    scanf("%f", &c);
    printf("The Fahrenheit Value: %f\n", ((c * 9/5) + 32));
    printf("Enter the Temperature in Fahrenheit that you want in celsius:");
    scanf("%f", &f);
    printf("The Celsius value: %f", ((f-32)*5/9));
    return 0;
}