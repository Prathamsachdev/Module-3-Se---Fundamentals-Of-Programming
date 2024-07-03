// WAP to accept the height of a person in centimeters and categorize the person according to their height

#include<stdio.h>

int main() 
{
	
	int height;
	
	printf("Enter Height : ");
	scanf("%d",&height);
	
	if(height>=182)
	{
		printf("Your are taller !",height);
	}
	else if(height>160)
	{
		printf("Your are average !",height);
	}
	else if(height>132)
	{
		printf("You are shorter !",height);
	}
	
	return 0;
}
