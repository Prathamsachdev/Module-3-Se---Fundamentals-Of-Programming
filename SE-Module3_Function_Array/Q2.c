//WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)

#include <stdio.h>

int main() {
    int i;
    char choice;
    float numbers[2]; 
    float result;

    while (1) {
        
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);

        if (choice == 5) {
            
            printf("Exiting the program.\n");
            break;
        }

       
        printf("Enter two numbers: ");
        for (i = 0; i < 2; i++) {
            scanf("%f", &numbers[i]);
        }

        
        switch (choice) {
            case '+':
                result = numbers[0] + numbers[1];
                printf("Result of addition: %.0f\n", result);
                break;
            case '-':
                result = numbers[0] - numbers[1];
                printf("Result of subtraction: %.0f\n", result);
                break;
            case '*':
                result = numbers[0] * numbers[1];
                printf("Result of multiplication: %.0f\n", result);
                break;
            case '/':
                if (numbers[1] != 0) {
                    result = numbers[0] / numbers[1];
                    printf("Result of division: %.0f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

