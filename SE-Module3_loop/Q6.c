//WAP to print Fibonacci series up to given numbers

#include<stdio.h>

int main()

{
	int i,num,n1=0,n2=1,n3=n1+n2;
	
	printf("Enter number that you want fibonacci series till : ");
	scanf("%d",&num);
	printf("%d %d",n1,n2);
	for(i=1;i<=num-2;i++)
	{
		
		printf(" %d",n3);//1
		n1 = n2;//1
		n2 = n3;//1
		n3 = n1 + n2;//2
	}
	
	return 0;
}

//declare variable i , num
//declare static variable n1=0,n2=1,n3=n1+n2
//get number from user input
//print n1 and n2 before loop
//give condition in loop
//print n3 inside loop
//swap variables n1 to n2
//n2 to n3
//n3 = n1 + n2
//now i's value is change
//loop contionue
