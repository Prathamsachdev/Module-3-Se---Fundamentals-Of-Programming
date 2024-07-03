#include <stdio.h>

int main() {
    char first_char, second_char, third_char;

    // Prompt the user to enter the school's name (assuming it's three words)
    printf("Enter the school's name (three words): ");
    scanf(" %c %c %c", &first_char, &second_char, &third_char);

    // Print the abbreviated form
    printf("Abbreviated form: %c%c%c\n", first_char, second_char, third_char);

    return 0;
}

