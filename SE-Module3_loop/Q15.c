//Calculate sum of 10 numbers using of while loop

#include<stdio.h>

int main()
{
	int num, i , sum=0;
	
	while(i <= 10)
	{
		printf("Enter number : ");
		scanf("%d",&num);
		
		sum = sum + num;
		
		i++;
	}
	printf("sum of 10 numbers : %d", sum);
	
	return  0;
}
