//Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>

int main()
{
	int num, i , sum=0;
	
	printf("Enter number : ");
	scanf("%d",&num);
		
	while(i <= num)
	{
		sum = sum + i;
		i++;
	}
	printf("sum of 10 numbers : %d", sum);
	
	return  0;
}
