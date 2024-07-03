//Write a C program to check whether a triangle can be formed with the given values for the angle

#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the side 1 of tringle: ");
    scanf("%f", &side1);
	
	printf("Enter the side 2 of tringle: ");
    scanf("%f", &side2);
    
    printf("Enter the side 3 of tringle: ");
    scanf("%f", &side3);

    if (side1 + side2 + side3 == 180) 
	{
        printf("The sides form a valid triangle.\n");
    } 
	else 
	{
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}

