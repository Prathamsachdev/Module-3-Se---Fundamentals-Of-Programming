//Write a C program to input basic salary of an employee and calculateits Gross salary according to following:

#include <stdio.h>

int main() {
	
    float basic_salary, gross_salary, hra, da;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000) 
	{
        hra = 0.2 * basic_salary;
        da = 0.8 * basic_salary;
    } 
	else if (basic_salary <= 20000) 
	{
        hra = 0.25 * basic_salary;
        da = 0.9 * basic_salary;
    } 
	else 
	{
        hra = 0.3 * basic_salary;
        da = 0.95 * basic_salary;
    }

    gross_salary = basic_salary + hra + da;

	printf("HRA : %0.0f\n",hra);
	printf("DA : %0.0f\n",da);
    printf("Gross Salary: Rs. %0.0f\n", gross_salary);

    return 0;
}

