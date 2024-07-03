//swap value with declare 3rd variable

#include<stdio.h>

int main() {
	
	int a,b,c;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\n-------- before swap --------");
	
	printf("\n%d %d",a,b);
	c=a;
	a=b;
	b=c;
	
	printf("\n-------- after swap --------");

	printf("\n%d %d",a,b);
	
	return 0;
}
