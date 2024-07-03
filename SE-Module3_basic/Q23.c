//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>

int main() {
	
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\n-------- before swap --------");
	
	printf("\n%d %d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("\n-------- after swap --------");

	printf("\n%d %d",a,b);
	
	return 0;
}
