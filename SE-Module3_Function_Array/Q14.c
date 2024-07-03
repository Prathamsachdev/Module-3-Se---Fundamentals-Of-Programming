//Perform 2D matrix array

#include <stdio.h>

int main() 
{
    int rows, cols , i , j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The 2D array is:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

