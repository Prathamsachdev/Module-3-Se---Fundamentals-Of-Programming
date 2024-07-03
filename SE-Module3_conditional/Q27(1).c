//week days using switch case

#include<stdio.h>
int main()
{
	int day;
	
	printf("1 for monday \n2 for tuesday \n3 for wednesday \n4 for thursday n\5 for friday \n6 for saturday \n7 for sunday\n");
	
	printf("\nEnter your choice : ");
	scanf("%d",&day);
	
	switch(day) 
	{
		case 1:
			{
				printf("monday");
				break;
			}
		case 2:
			{
				printf("tuesday");
				break;
			}
		case 3:
			{
				printf("wednesday");
				break;
			}
		case 4:
			{
				printf("thursday");
				break;
			}
		case 5:
			{
				printf("friday");
				break;
			}
		case 6:
			{
				printf("saturday");
				break;
			}
		case 7:
			{
				printf("sunday");
				break;
			}	
		default:
			{
				printf("invalid choice");
			}
	}
	
	return 0;
}
