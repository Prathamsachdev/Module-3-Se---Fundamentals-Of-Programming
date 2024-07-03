#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter a number : ");
    scanf("%d", &number);

    // Print the ASCII value of the entered number
    printf("The ASCII value of the number %d = %d\n", number, number + '0');

    return 0;
}

