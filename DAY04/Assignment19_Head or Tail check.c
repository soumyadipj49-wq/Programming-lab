#include <stdio.h>
int main ()
{
	char Head;
	printf("Enter Head or Tail : ");
	scanf("%c", &Head);
	
	if (Head)
	{
		printf("The coin is filipped to Head");
	}
	
	else 
	{
		printf("The coin is flipped to Tail");
	}
	return 0;
}
