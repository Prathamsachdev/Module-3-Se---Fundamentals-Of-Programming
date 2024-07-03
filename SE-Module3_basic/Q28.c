//Convert years into days and months

#include<stdio.h>

int main() 
{
	
	int years, total_days , months, days;
	
	printf("Enter years :");
	scanf("%d",&years);
	
	total_days = years * 365;
	months = years * 12;
	
	printf("%d years \n",years);
	printf("%d days \n",total_days);
	printf("%d months\n",months);
	
	return 0;
}
