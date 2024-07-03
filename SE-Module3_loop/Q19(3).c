//pattern
//    *
//   * *
//  * * *
// * * * *
//* * * * *

#include<stdio.h>

int main()

{
	
	int i , j , n , a;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			printf("  ");
		}
		
		for(a = 0; a < 2 * i + 1; a++)
		{
			printf("*");
			
			if(a < 2 * i)
			{
				printf(" ");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
