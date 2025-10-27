#include<stdio.h>
int main(){
	int num , count=0 , remainder;
	printf("Enter the no: ");
	scanf("%d",&num);
	while (num != 0){
		remainder = num % 10;
		count = count * 10 + remainder;
		num = num/10;
	}
	printf("Reversed of number is %d", count);
	return 0;
}
