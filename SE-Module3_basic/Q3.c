#include <stdio.h>

int main() {
	
    float radius;
	float area;
	float circumference;
	float PI;
    
    PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    printf("Area of the circle: %0.2f\n", area);
    printf("Circumference of the circle: %0.2f\n", circumference);

    return 0;
}

