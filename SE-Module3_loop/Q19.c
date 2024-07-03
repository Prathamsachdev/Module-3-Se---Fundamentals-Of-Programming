//pattern
//1
//10
//101
//1010
//10101

#include<stdio.h>

int main()
{
	int i , j , n;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			if(j % 2 == 0)
			{
				printf("0");
			}
			else 
			{
				printf("1");
			}
		}
		printf("\n");
	}
		
	
	return 0;
}



//1 - you should declare a variable
//2 - take input or number from user
//3 - create loop for print rows of pattern
//4 - create anothe loop for print number is rows 
//5 - make condition for print numbers like if numbers % 2 == 0 then print 0 neither 1
//6 - print next number in another line

