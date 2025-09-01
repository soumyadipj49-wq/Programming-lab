#include <stdio.h>
int main()
{
	int roll;
	printf("Enter roll no: ");
	scanf("%d",&roll);
	if (roll==100)
	{
		printf("Yes the student is present");
	}
	if (roll != 100)
	{
		printf("The student is not present");
	}
	return 0;
}

