//WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array

#include <stdio.h>

int main() 
{
    int rows, cols , i , j , k;
    
    int matrix1[rows][cols] , matrix2[rows][cols] , add[rows][cols] , sub[rows][cols] , mul[rows][cols];

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            add[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            mul[i][j] = 0;
            for(k = 0; k < cols; k++) {
                mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the results
    printf("\nAddition of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

