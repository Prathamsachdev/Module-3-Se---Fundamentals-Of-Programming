#include <stdio.h>

int main() {
	
    float a, b, c, circumference;

    printf("Enter length of side 1: ");
    scanf("%f", &a);
    printf("Enter length of side 2: ");
    scanf("%f", &b);
    printf("Enter length of side 3: ");
    scanf("%f", &c);

    circumference = a + b + c;

    printf("Circumference of the triangle: %f\n", circumference);
o
    return 0;
}
