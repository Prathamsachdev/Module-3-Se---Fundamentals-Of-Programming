// Write a C program to calculate profit and loss on a transaction

#include <stdio.h>

int main() {
    float wholesale_rate, sell_rate, profit, loss;

    printf("Enter the your wholesale rate : ");
    scanf("%f", &wholesale_rate);
    
    printf("Enter the selling rate : ");
    scanf("%f", &sell_rate);

    if (sell_rate > wholesale_rate) 
	{
        profit = sell_rate - wholesale_rate;
        printf("Profit: %0.0f\n", profit);
    } 
    
	else if ( sell_rate < wholesale_rate) 
	{
        loss = wholesale_rate - sell_rate;
        printf("\nLoss: %0.0f\n", loss);
    } 
    
    return 0;
    
}
