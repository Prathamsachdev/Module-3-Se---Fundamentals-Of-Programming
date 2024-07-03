#include <stdio.h>

int main()  
{  
	int a;
	int b;
	
	printf("Enter first value : "); 
	scanf("%d", &a);
	
	printf("Enter second value: "); 
	scanf("%d", &b);
	
	int add = a + b,sub = a-b,mul=a*b,div = a/b,mod = a%b; 
	   
	printf("Additon of values is : %d\n", add);
	printf("Substraction of values is : %d\n", sub);
	printf("Multiplication of values is : %d\n", mul);
	printf("Division of values is : %d\n", div); 
	printf("Modulo of values is : %d\n", mod); 
	
	return 0;  
}
