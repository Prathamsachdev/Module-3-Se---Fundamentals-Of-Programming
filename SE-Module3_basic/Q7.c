#include<stdio.h>

int main() {
	
    float area, width, length;

    printf("Enter the width of the square: ");
    scanf("%f", &width);
    printf("Enter the length of the square: ");
    scanf("%f", &length);

    area = width * length;

    printf("The area of the rectangle is: %0.2f\n", area);

    return 0;
}
