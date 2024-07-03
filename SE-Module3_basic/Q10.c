#include <stdio.h>

int main() {
    float w, h, l, area;

    printf("Enter width of the rectangular prism: ");
    scanf("%f", &w);
    printf("Enter length of the rectangular prism: ");
    scanf("%f", &l);
    printf("Enter height of the rectangular prism: ");
    scanf("%f", &h);

    area = 2 * ((w * l) + (h * l) + (h * w));

    printf("The area of the rectangular prism is : %0.2f\n", area);

    return 0;
}

