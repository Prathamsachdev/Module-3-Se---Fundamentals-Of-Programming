//#include <stdio.h>
//
//int main() {
//    float side;
//
//    printf("Enter the side length of the square: ");
//    scanf("%f", &side);
//
//    float circumference = 4 * side;
//
//    printf("Circumference of the square: %0.2f\n", circumference);
//
//    return 0;
//} 


//      OR



#include<stdio.h>

int main() {
	
    float area, width, length;

    printf("Enter the width of the square: ");
    scanf("%f", &width);
    printf("Enter the length of the square: ");
    scanf("%f", &length);

    area = width * length;
    
    float circumference = 4 * area;

    printf("The circumference of the square is: %0.2f\n", circumference);

    return 0;
}
