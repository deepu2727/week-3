// Write a program that reads a square matrix of n*n. Write a function int isLowerTriangular(int a[][],int n) that returns 1 if the atrix is lower triangular
#include <stdio.h>

// Function to check if matrix is lower triangular
int isLowerTriangular(int a[20][20], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {  // elements above diagonal
            if (a[i][j] != 0) {
                return 0; // Not lower triangular
            }
        }
    }
    return 1; // It is lower triangular
}

int main() {
    int n, i, j;
    int a[20][20];

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (isLowerTriangular(a, n))
        printf("The matrix IS a LOWER TRIANGULAR matrix.\n");
    else
        printf("The matrix is NOT a lower triangular matrix.\n");

    return 0;
}
