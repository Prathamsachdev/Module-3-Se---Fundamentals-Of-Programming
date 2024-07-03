//19.Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow

#include <stdio.h>

int main() {
    int customer_id;
    char customer_name[100];
    float unit, amount;

    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", &customer_name);
    printf("Enter Units Consumed: ");
    scanf("%f", &unit);

    if (unit <= 350) {
        amount = unit * 1.20;
    } else if (unit > 350 && unit < 600) {
        amount = unit * 1.50;
    } else if (unit >= 600 && unit < 800) {
        amount = unit * 1.80;
    } else {
        amount = unit * 2.00;
    }

    printf("\nCustomer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %0.0f\n", unit);
    printf("Total Amount: %0.0f\n", amount);

    return 0;
}

