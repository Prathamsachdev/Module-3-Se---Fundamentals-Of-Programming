////pattern
//a
//a b 
//a b c 
//a b c d 
//a b c d e  

#include<stdio.h>

int main()

{
	
	int i , j , n;
	char alpha = 'A';
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("%c ",'A' + j);
		}
		printf("\n");
	}
	
	return 0;
}
