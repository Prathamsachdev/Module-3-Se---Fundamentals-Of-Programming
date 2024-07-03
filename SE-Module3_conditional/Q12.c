//WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>

int main() {
    int first_no, second_no, third_no , max_no;

    printf("Enter first number : ");
    scanf("%d", &first_no);
    
    printf("Enter second number : ");
    scanf("%d", &second_no);
    
    printf("Enter third number : ");
    scanf("%d", &third_no);

	max_no = (first_no > second_no) ? ((first_no > third_no) ? first_no : third_no) : ((second_no > third_no) ? second_no : third_no);   
	
	printf("The maximum number between %d, %d, and %d is : %d\n", first_no, second_no, third_no, max_no);
	
    return 0;
}

