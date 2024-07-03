//Accept 5 numbers from user and find those numbers factorial

#include<stdio.h>

int main() 
{
	int i , fact , num , j;
	
	for(i=1;i<=5;i++)
	{
		printf("\nEnter number : ");
		scanf("%d",&num);
		
		fact = 1;
		
		for(j=1;j<=num;j++)
		{
			fact = fact*j;	
		}
		
		printf("factorial of %d is : %d\n",num,fact);
		
	}
	
	return 0;
}
