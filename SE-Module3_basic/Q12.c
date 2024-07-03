#include <stdio.h>

int main() {
	
    int students;
    int apples;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    apples = students * 5;

    printf("Total %d apples are needed", apples);

    return 0;
}

