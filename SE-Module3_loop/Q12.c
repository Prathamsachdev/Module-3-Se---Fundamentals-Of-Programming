//armstrong

#include<stdio.h>
#include<math.h>

int main()

{
	
	int number , rev , rem , arm , digit , op;
	
	printf("Enter digit : ");
	scanf("%d",&digit);
	
	printf("Enter number : ");
	scanf("%d",&number);
	
	op = number;
	
	while(number != 0)
	{
		rem = number%10;
		arm = arm + pow(rem,digit);
		number = number/10; 
	}

 	if(op == arm)
 	{		
 		printf("The given number is armstrong");	
	}
	
	else 
	{
		printf("The given number is not armstrong");
	}
	
	return 0;
}
