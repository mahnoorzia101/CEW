#include <stdio.h>

int main() {
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    if (row <= 0 || col <= 0) {
        printf("Invalid matrix size. Please enter positive integers for rows and columns.\n");
        return 1;
    }

    int matrix1[row][col], matrix2[row][col], result[row][col];

    // Input the elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices using pointers
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            *(*(result + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
    }

    // Display the result matrix
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", *(*(result + i) + j));
        }
        printf("\n");
    }

    return 0;
}
