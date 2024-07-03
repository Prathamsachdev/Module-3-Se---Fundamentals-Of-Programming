//Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>

int main() {
	
	int a,b;
	
	printf("enter first number : ");
	scanf("%d",&a);
	
	printf("enter second number : ");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("%d is eqaul to %d",a,b);
	} 
	else 
	{
		printf("%d is not equal to %d",a,b);
	}
	
	return 0;
}
