//WAP to convert years into days and days into years

#include<stdio.h>

int main() 
{
	
	int years, total_days;
	
	printf("Enter years :");
	scanf("%d",&years);
	
	total_days = years * 365;

	printf("%d days \n",total_days);
	
	printf("Enter days : ");
	scanf("%d",&total_days);
	
	years = total_days/365;
	
	printf("%d years",years);
	
	return 0;
}
