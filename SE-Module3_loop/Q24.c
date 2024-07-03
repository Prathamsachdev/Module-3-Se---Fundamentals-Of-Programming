//1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>

int main()
{
	int number , total , i;
	
	printf("Enter number : ");
	scanf("%d",&number);
	
	for (i= 1; i <= number; i++)
	{			
		total += i;
		
		printf("%d",i);

		if(i != number)
		{
			printf(" + ");
		}
	
	}
	
	printf(" = %d ",total);
	
	return 0;
}
