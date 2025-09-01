#include <stdio.h>
int main ()
{
	char ch;
	printf("Enter letters: ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' ){
	
	if (ch=='a') printf("The letter is vowel");
	if (ch=='e') printf("The letter is vowel");
	if (ch=='i') printf("The letter is vowel");
	if (ch=='o') printf("The letter is vowel");
	if (ch=='u') printf("The letter is vowel");
	else printf("\nThe letter is Consonant");
}

return 0;
}
