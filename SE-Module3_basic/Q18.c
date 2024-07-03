#include<stdio.h>

int main() {
	
	int salary;

	printf("Enter your one month salary : ");
	scanf("%d", &salary);
	
	int annual_salary = salary * 12;
	
	printf("Your annual salary is : %0.0d" , annual_salary);	
	
	return 0;
}
