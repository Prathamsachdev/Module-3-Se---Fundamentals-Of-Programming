//Accept 2 numbers and find out its sum check it size

#include <stdio.h>

int main() {
    int n1, n2, sum;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    sum = n1 + n2;

    printf("The sum of %d and %d is: %d\n", n1, n2, sum);
    printf("Size: %d bytes\n", sizeof(sum));

    return 0;
}

