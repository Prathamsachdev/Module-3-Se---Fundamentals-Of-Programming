//WAP to print table up to given number

#include <stdio.h>

int main() 

{
    int num, i;

    printf("Enter the number for table : ");
    scanf("%d", &num);

    printf("Table of %d:\n", num);
    
    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
    
}
