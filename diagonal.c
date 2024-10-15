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

// Function to replace diagonals with ones
void replaceDiagonalsWithOnes(int matrix[][4], int i, int j) {
    for (i = 0; i < rowsize; i++) {
        for (j = 0; j < colsize; j++) {
            if (i == j || i + j == rowsize - 1) {
                matrix[i][j] = 1;
            }
        }
    }

    printf("Matrix after replacing diagonals with ones:\n");
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
    replaceDiagonalsWithOnes(matrix, 3, 4);

    return 0;
}
