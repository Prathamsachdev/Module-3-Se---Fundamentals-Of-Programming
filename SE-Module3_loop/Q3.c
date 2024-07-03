//WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include<stdio.h>

int main()
{
	int i,no,odd=0,even=0,sum_even=0,sum_odd=0;

    for (i = 0; i < 10; i++) 
	{
		
		printf("Enter number:");
    	scanf("%d", &no);

        if(no % 2 == 0)
        {
        	even++;
        	sum_even += no;
		}
		else 
		{
			odd++;
			sum_odd += no;
		}
	}
	
	printf("\nTotal even number are : %d\n",even);
	printf("Total odd number are : %d\n",odd);
	printf("\nsum of all even numbers : %d\n",sum_even);
	printf("sum of all odd numbers : %d\n",sum_odd);
	
	return 0;
}
