//Accept marks from user and check pass or fail

#include<stdio.h>

int main() 
{
	
	int percentage;
	
	printf("Enter your percentage : ");
	scanf("%d",&percentage);
	
	if(percentage>35)
	{
		printf("You are Pass...",percentage);
	}
	else 
	{
		printf("You are Fail !!",percentage);
	}
	
	return 0;
}
