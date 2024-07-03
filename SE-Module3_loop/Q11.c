//Accept 5 names from user at run time

#include<stdio.h>

int main()
{
	
	int i;
	char name[100];
	
	for(i=1;i<=5;i++)
	{
		printf("Enter name : ");
		scanf("%s",&name);
		
		printf("Your name is : %s\n",name);
	}
	
	return 0;
}
