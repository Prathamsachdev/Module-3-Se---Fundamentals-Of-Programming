//Accept 5 numbers from user and perform sum of array

#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    int i;

    
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    
    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}

