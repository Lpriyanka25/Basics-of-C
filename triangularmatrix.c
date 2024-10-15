#include <stdio.h>
#define rowsize 3
#define colsize 4

// Function to display the matrix
void displayMatrix(int matrix[][4], int i, int j) {
    printf("Matrix:\n");
    for (i = 0; i < rowsize; i++) {
        for (j = 0; j < colsize; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to set upper triangular elements to zero
void zeroUpperTriangular(int matrix[][4], int i, int j) {
    for (i = 0; i < rowsize; i++) {
        for (j = i + 1; j < colsize; j++) {
            matrix[i][j] = 0;
        }
    }

    printf("Matrix after zeroing the upper triangular part:\n");
    for (i = 0; i < rowsize; i++) {
        for (j = 0; j < colsize; j++) {
            printf("%d\t", matrix[i][j]);
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
    zeroUpperTriangular(matrix, 3, 4);

    return 0;
}
