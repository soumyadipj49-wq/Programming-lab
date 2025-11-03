#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int mat1[MAX_ROWS][MAX_COLS];
    int mat2[MAX_ROWS][MAX_COLS];
    int sum[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int i, j;

    
    printf("Enter the number of rows (max %d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Enter the number of columns (max %d): ", MAX_COLS);
    scanf("%d", &cols);

    
    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Enter element mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Enter element mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

   
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

   
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d ", sum[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
