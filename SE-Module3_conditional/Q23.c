//WAP to input the week number and print week day.

#include <stdio.h>

int main() 
{
    int week_no;

    printf("Enter the week number : ");
    scanf("%d", &week_no);

    if (week_no == 1) 
	{
        printf("Monday\n");
    } 
	else if (week_no == 2) 
	{
        printf("Tuesday\n");
    } 
	else if (week_no == 3) 
	{
        printf("Wednesday\n");
    } 
	else if (week_no == 4) 
	{
        printf("Thursday\n");
    } 
	else if (week_no == 5) 
	{
        printf("Friday\n");
    } 
	else if (week_no == 6) 
	{
        printf("Saturday\n");
    } 
	else if (week_no == 7) 
	{
        printf("Sunday\n");
    } 
	else {
        printf("Invalid week number!\n");
    }

    return 0;
}

