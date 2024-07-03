//Accept 5 employees name and salary and count average and total salary

#include<stdio.h>

int main() 
{
	
	int emp1,emp2,emp3,emp4,emp5,total,average;
	
	printf("Enter salary of employee 1 : ");
	scanf("%d",&emp1);
	
	printf("Enter salary of employee 2 : ");
	scanf("%d",&emp2);
	
	printf("Enter salary of employee 3 : ");
	scanf("%d",&emp3);
	
	printf("Enter salary of employee 4 : ");
	scanf("%d",&emp4);
	
	printf("Enter salary of employee 5 : ");
	scanf("%d",&emp5);
	
	total = emp1+emp2+emp3+emp4+emp5;
	printf("Total salary of all employees : %d\n",total);
	
	average = total/5;
	printf("Average of all employees salary : %d\n",average);
	
	return 0;
}
