#include <stdio.h>
int main() 
{
	float principal,rate,time,simpleInterest;
	printf("Enter Principle Amount: ");
	scanf("%f", &principal);
	printf("Enter Rate of Interset (in %%): ");
	scanf("%f",&rate);
	printf("Enter Time (in years): ");
	scanf("%f", &time);
	simpleInterest = (principal * rate * time)/100;
	printf("\nsimple Interest = %.2f\n", simpleInterest);
	return 0;
}
