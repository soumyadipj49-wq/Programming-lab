#include <stdio.h>
int main(){
	int num , reversed =0 ,remainder , original;
	printf("Enter the no : ");
	scanf("%d",&num);
	original = num;
	while (num != 0){
		remainder = num % 10;
	reversed = reversed * 10 + remainder;
		num = num/10;
	}
	if (original == reversed)
	printf("The number is palindrom number %d", original);
	else 
		printf("The number is not a palindrom number %d", original);
		return 0;
}
