//c program to If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256

#include <stdio.h>

int main() {
	
    float bill, total;

    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    if (bill < 256) 
	{
        printf("Your bill should be at least Rs 256 !");
    	
    } 
	else if (bill > 800) 
	{
        total = bill + (bill * 0.18);
        printf("\nTotal bill amount: Rs. %0.0f\n", total);
    } 
	else 
	{
        total = bill;
        printf("\nTotal bill amount: Rs. %0.0f\n", total);
    }

    return 0;
}

