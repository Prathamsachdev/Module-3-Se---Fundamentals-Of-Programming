//Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>

int main()
{
	int num, i , odd=0, even=0, sum;

	while(i < 5)
	{	
		printf("Enter number:");
    	scanf("%d", &num);

        if(num % 2 == 0)
        {	
        	even++;
  		}
		else 
		{
			odd++;
		}
		
		i++;
		
	}
	
	printf("\nTotal even number are : %d\n",even);
	printf("Total odd number are : %d\n",odd);
	
	return 0;
}
