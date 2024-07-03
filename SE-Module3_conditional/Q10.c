//WAP to check whether a number is negative, positive or zero.

#include<stdio.h>

int main() 
{
	int number;
	
	printf("Enter number : ");
	scanf("%d", &number);
	
	if(number < 0)
	{
		printf("Number is Negative !");
	}
	else if(number > 0)
	{
		printf("Number is Positive. ");
	}
	else 
	{
		printf("Number is Zero !");
	}
	
	return 0;
}
