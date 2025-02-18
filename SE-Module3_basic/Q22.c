#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    float amount = principal * pow((1 + rate/100), time);
    compound_interest = amount - principal;

    printf("Compound interest: %0.2f\n", compound_interest);

    return 0;
}

