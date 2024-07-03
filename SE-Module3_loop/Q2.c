//WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>

int main()
{
	
	int number;

	for(number=1;number<=5;number++)
	{	
		printf("Enter number : ");
		scanf("%d",&number);
	
		printf("%d\n",number);
	}
	
	return 0;
}
