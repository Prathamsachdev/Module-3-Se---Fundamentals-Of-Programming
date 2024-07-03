// Convert kilometers into meters

#include<stdio.h>

int main(){
	
	int km;
	
	printf("Enter kilometers : ");
	scanf("%d",& km);
	
	int convert = km*1000;
	printf("%d Meters",convert);
	
	return 0;
}
