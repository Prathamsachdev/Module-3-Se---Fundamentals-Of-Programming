//Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>

int main()

{
	
	int number , pal , rem , op;
	
	printf("Enter number : ");
	scanf("%d",&number);
	
	op = number;
	
	while(number != 0)
	{
		rem = number%10;
		pal = pal * 10 + rem;
		number = number/10; 
	}

	if(op == pal)
	{
		printf("number is palindrome");	
	}
	else 
	{
		printf("number is not palindrome");
	}
	
	return 0;
}
