#include <stdio.h>
#include <stdlib.h>

// Function to take the matrix input
void inputMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int** matrixA, int** matrixB, int** result, int rowsA, int colsA, int rowsB, int colsB) {
    // Matrix multiplication is possible only if the number of columns of A equals the number of rows of B
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible. The number of columns of A must equal the number of rows of B.\n");
        return;
    }
    
    // Initialize result matrix to zero
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }

    // Perform multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int** matrix, int rows, int cols) {
    for
