// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>

int main()
{
	int n,formula;
	
	printf("Enter n :");
	scanf("%d",&n);

	printf("The power of is : %d",formula);
	
	printf("First three powers of %d are:\n", n);
    printf("%d^1 = %d\n", n, n);
    printf("%d^2 = %d\n", n, n * n);
    printf("%d^3 = %d\n", n, n * n * n);
	
	return 0;
}
