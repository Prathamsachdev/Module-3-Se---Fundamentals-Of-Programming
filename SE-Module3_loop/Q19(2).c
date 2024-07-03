//pattern
//a
//b c
//d e f
//g h i j
//k l m n o 

#include<stdio.h>

int main()
{
	
	int i , j , n;
	char alpha = 'A';
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j = 1;j<=i;j++)
		{
			printf("%c ",alpha);
			alpha++;
		}
		printf("\n");
	}
	
	return 0;
}
