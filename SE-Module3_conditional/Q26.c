//Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:

#include <stdio.h>
	
int main() {
    float charges_of_unit, total;
    
    printf("Enter the electricity unit charges: ");
    scanf("%f", &charges_of_unit);

    if (charges_of_unit <= 50) 
	{
        total = charges_of_unit * 0.50;
    } 
	else if (charges_of_unit <= 150) 
	{
        total = (50 * 0.50) + ( (charges_of_unit - 50) * 0.75);
    } 
	else if (charges_of_unit <= 250) 
	{
        total = (50 * 0.50) + (100 * 0.75) + ( (charges_of_unit - 150) * 1.20);
    } 
	else 
	{
        total = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ( (charges_of_unit - 250) * 1.50);
    }
    
    float total_bill = (total * 0.20) + total;

    printf("Total electricity bill: Rs. %0.2f\n", total_bill);

    return 0;
}

