//Write a C program to determine eligibility for admission to a professional course based on the following criteria Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in M -------Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

#include<stdio.h>

int main() 
{
	
	int maths,physics,chemistry,total,maths_physics;
	
	printf("Enter marks of maths : ");
	scanf("%d",&maths); 
	
	printf("Enter marks of physics : ");
	scanf("%d",&physics);
	
	printf("Enter marks of chemistry : ");
	scanf("%d",&chemistry);
	
	total = maths + physics + chemistry;
	maths_physics  = maths + physics;
	
	printf("Total of all three subjects : %d\n",total);
	printf("Total of maths and phyiscs : %d\n",maths_physics);
	
	if(maths>=65 && physics>=55 && chemistry>=50 && total>=190)
	{
		printf("candidate is eligible !");
	}
	else if (maths_physics>=140)
	{
		printf("candidate is eligible !");
	}
	else 
	{
		printf("candidate is not eligible !!");
	}

	return 0;
}
