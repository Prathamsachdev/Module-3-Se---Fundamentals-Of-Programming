#include<stdio.h>

int main() {
	
	int salary;
	float premium_rate;
	
	printf("Enter Person Salary : ");
	scanf("%d", &salary);
	
	printf("Enter Premium Rate : ");
	scanf("%f", &premium_rate);
	
	float insurence_premium = salary * premium_rate;
	
	printf("The Insurence premium based on salary is : %0.2f", insurence_premium);
	
	return 0;
}
