//string is collection of multiple characters

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char str[100];
	int ctr , ch , i;
	
		printf("\nReplace lowercase to uppercase and vice versa");
		printf("\n-----------------------------------------------------");
		
		printf("\nInput the string : ");
		fgets(str , sizeof str , stdin);
		
	i = strlen(str);
	
	ctr = i;
	
	printf("\nThe given sentence is : %s",str);
	
	printf("After case changed the string is : ");
	for(i=0;i<ctr;i++)
	{
		ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
		putchar(ch);
	}
	printf("\n\n");
}
