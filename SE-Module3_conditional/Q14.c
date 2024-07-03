//WAP to find the largest of three numbers

#include<stdio.h>

int main() 
{
	
	int no1,no2,no3,largest;
	
	printf("Enter number 1 : ");
	scanf("%d",&no1);
	
	printf("Enter number 2 : ");
	scanf("%d",&no2);
	
	printf("Enter number 3 : ");
	scanf("%d",&no3);
	
	if(no1 > no2 && no1 > no3)
	{
		printf("The largest number between three numbers you put here is : %d ",no1);
	}
	else if (no2 > no1 && no2 > no3)
	{
		printf("The largest number between three numbers you put here is : %d ",no2);
	}
	else 
	{
		printf("The largest number between three numbers you put here is : %d ",no3);
	}
	
	return 0;	
}
