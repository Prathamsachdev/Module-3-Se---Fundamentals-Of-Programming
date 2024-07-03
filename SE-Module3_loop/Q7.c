//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>

int main()

{
	
	int number , rev , rem;
	
	printf("Enter number : ");
	scanf("%d",&number);
	
	while(number != 0)
	{
		rem = number%10;
		rev = rev * 10 + rem;
		number = number/10; 
	}

	printf("Reverse number is : %d",rev);
	
	return 0;
}
