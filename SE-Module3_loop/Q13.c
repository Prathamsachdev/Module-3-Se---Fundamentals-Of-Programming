//.calculate the Factorial of a Given Number using while loop

#include<stdio.h>

int main()
{
	
	int i = 1 , num , fact = 1;
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	while (i <= num)
	{
		fact =  fact * i;
		i++;
	}

	printf("factorial is : %d",fact);
	
	return 0;
}
