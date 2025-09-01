#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st  number: ");
	scanf("%d",&a);
	printf("Enter 2nd  number: ");
	scanf("%d",&b);
	printf("Enter 3rd  number: ");
	scanf("%d",&c);
	if (a>b) {
	if (b>c)
	{
		printf("The greatest number is %d", a);
	}}
	else if (b>a){
	if (b>c)
	{
		printf("The greatest number is %d",b);
	}}
	else if (c>a){
	if(c>b)
	{
		printf("The greatest number is %d", c);
	}}
	return 0;
}
