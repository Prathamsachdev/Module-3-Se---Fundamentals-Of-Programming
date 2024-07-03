//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include<stdio.h>

int main() {
	
	char oprtr;
	int a,b,result;
	
	printf("Enter operator ( + , - , * , / , %) : ");
	scanf("%c",&oprtr);
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	if(oprtr == '+')
	{
		result = a+b;
		printf("%d + %d is equal to %d",a,b,result);
	}
	
	else if(oprtr == '-')
	{
		result = a-b;
		printf("%d - %d is equal to %d",a,b,result);
	}
	
	else if(oprtr == '*')
	{
		result = a*b;
		printf("%d * %d is equal to %d",a,b,result);
	}
	
	else if(oprtr == '/')
	{
		result = a/b;
		printf("%d / %d is equal to %d",a,b,result);
	}
	
	else if(oprtr == '%')
	{
		result = a%b;
		printf("%d modulo %d is equal to %d",a,b,result);
	}
	
	else 
	{
		printf("invalid operator");
	}
	return 0;
}
