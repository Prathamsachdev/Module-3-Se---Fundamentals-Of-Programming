#include <stdio.h>

int main() {
    float salary,insurance_premium,loan_installment,remaining_salary;

    printf("Enter monthly salary: ");
    scanf("%f", &salary);
    
    insurance_premium = salary*10/100;
    loan_installment = salary*10/100;
    remaining_salary = salary - insurance_premium - loan_installment;

    printf("Remaining salary is : %0.2f\n", remaining_salary);

    return 0;
}

