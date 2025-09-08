#include <stdio.h>
int main()
{
	double num1,num2,result;
	char opera;
	printf("Enter 1st number: ");
	scanf("%lf", &num1);
	printf("Enter an operator(+,-,*,/): ");
	scanf(" %c",&opera);
	printf("Enter 2nd number: ");
	scanf("%lf",&num2);
	switch(opera){
		case '+':
		result = num1 + num2;
		printf("Result: %.2lf\n", result);
		break;
		case '-':
		result = num1 - num2;
		printf("Reslt : %.2lf\n", result);
		break;
		case '*':
		result = num1 * num2;
		printf("Result : %.2lf\n", result);
		break;
		case '/':
		if (num2 !=0)
		result = num1 / num2;
		else {
		printf("ERROR!");
		return 1;
		 }
		printf("Result : %.2lf\n", result);
		break;
		default:
			printf("Erron! Invalid operator");
			return 1;
	}
	return 0;
}
