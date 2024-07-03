#include <stdio.h>

int main() {
    char first_char, second_char, third_char;

    // Prompt the user to enter the country's name (assuming it's two words)
    printf("Enter the country's name : ");
    scanf(" %c %c %c", &first_char, &second_char , &third_char);

    // Print the abbreviated form
    printf("Abbreviated form: %c%c%c\n", first_char, second_char,third_char);

    return 0;
}

