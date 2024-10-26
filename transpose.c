#include <stdio.h>
#define rowsize 3
#define colsize 4

// Function to display the matrix
void displayMatrix(int matrix[][4],int i,int j) {
    printf("Matrix:\n");
    for (i = 0; i < rowsize; i++) {
        for (j = 0; j < colsize; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to perform transpose of the matrix
void transposeMatrix(int matrix[][4],int i,int j) {
    int transposedMatrix[colsize][rowsize];

    for (i = 0; i < rowsize; i++) {
        for (j = 0; j < colsize; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the Matrix:\n");
    for (i = 0; i < colsize; i++) {
        for (j = 0; j < rowsize; j++) {
            printf("%d\t", transposedMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][4];
    int i,j;

    printf("Enter the elements of the matrix (3x4):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    displayMatrix(matrix, 3, 4);
    transposeMatrix(matrix, 3, 4);

    return 0;
}
