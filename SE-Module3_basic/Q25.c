//Accept 5 expense from user and find average of expense

#include <stdio.h>

int main() 
{
    float exp1;
    float exp2;
	float exp3;
	float exp4;
	float exp5;
	float total, average;

    printf("Enter expense 1 :");
    scanf("%f",&exp1);
    
    printf("Enter expense 2 :");
    scanf("%f",&exp2);
    
    printf("Enter expense 3 :");
    scanf("%f",&exp3);
    
    printf("Enter expense 4 :");
    scanf("%f",&exp4);
    
    printf("Enter expense 5 :");
    scanf("%f",&exp5);
  
    total = exp1 + exp2 + exp3 + exp4 + exp5;

    average = total / 5;
    printf("Average expense: %0.2f\n", average);

    return 0;
}

