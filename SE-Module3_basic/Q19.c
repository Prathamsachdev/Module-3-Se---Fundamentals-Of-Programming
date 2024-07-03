#include <stdio.h>
int main() {
	float principle, rate, time, CI;
	
	printf("enter principle: ");
	scanf("%f", &principle);
	
	printf("enter time: ");
	scanf("%f", &time);
	
	printf("enter intrest rate: ");
	scanf("%f", &rate);
	
	CI = principle * ((1 + rate / 100) * (1 + rate / 100) * (1 + rate / 100)); 
	float compound_intrest = CI - principle;
	
	printf("Compound Intrest of One year : %0.2f\n", compound_intrest);
	
    return 0;

}
