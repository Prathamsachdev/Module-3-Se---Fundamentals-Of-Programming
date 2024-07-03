//Accept the input month number and print number of days in that months

#include<stdio.h>

int main()
{
	int month;
	
	printf("Enter Month Number : ");
	scanf("%d",&month);
	
	if(month == 1)
	{
		printf("Month Number 1 is January and it has 31 Days");
	}
	else if(month == 2)
	{
		printf("Month Number 2 is February and it has 28 and 29 Days(if leap year)");
	}
	else if(month == 3)
	{
		printf("Month Number 3 is March and it has 31 Days");
	}
	else if(month == 4)
	{
		printf("Month Number 4 is April and it has 30 Days");
	}
	else if(month == 5)
	{
		printf("Month Number 5 is May and it has 31 Days");
	}
	else if(month == 6)
	{
		printf("Month Number 6 is June and it has 30 Days");
	}
	else if(month == 7)
	{
		printf("Month Number 7 is July and it has 31 Days");
	}
	else if(month == 8)
	{
		printf("Month Number 8 is Augast and it has 30 Days");
	}
	else if(month == 9)
	{
		printf("Month Number 9 is September and it has 30 Days");
	}
	else if(month == 10)
	{
		printf("Month Number 10 is October and it has 31 Days");
	}
	else if(month == 11)
	{
		printf("Month Number 11 is November and it has 30 days");
	}
	else if(month == 12)
	{
		printf("Month Number 12 is December and it has 31 Days");
	}	
	
	return 0;
}
