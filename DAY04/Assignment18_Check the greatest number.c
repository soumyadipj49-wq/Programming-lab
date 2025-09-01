#include <stdio.h>
int main ()
{
	float a,b;
	printf("Enter 1st number: ");
	scanf("%f",&a);
	printf("Enter 2nd number: ");
	scanf("%f",&b);
	if (a>b)
	{
		printf("The greatest number is %f", a);
	}
	else {
		printf("The greatest number is %f",b);
	}
		return 0;	
}
