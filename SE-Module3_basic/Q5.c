#include<stdio.h>

int main() {
	
    float a;
	float area;
    
    printf("Enter the lenght of a : ");
    scanf("%f", &a);
 
    area = 6 * a * a;
    printf("The area of the cube is: %0.2f\n", area);
    
    return 0;
}
