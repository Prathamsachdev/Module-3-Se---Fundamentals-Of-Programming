//WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice 

#include<stdio.h>

int main()
{
	int arr[100];
	
	int i,j,temp , n;
	
	printf("enter total number of values :");
	scanf("%d",&n);
	
	printf("Enter values : ");
	
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}	
	
	printf("\n--------------- before sorting ---------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	printf("\n-------------- after sorting -----------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

