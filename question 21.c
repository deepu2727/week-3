//Write a program to calculate XA + YB where A and B are matrices and X = 2 and Y = 3 .
#include <stdio.h>

int main() {
    int m, n, i, j;
    int A[20][20], B[20][20], C[20][20];
    int X = 2, Y = 3;

    printf("Enter number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    // Input Matrix A
    printf("Enter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Compute C = X*A + Y*B
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = X * A[i][j] + Y * B[i][j];
        }
    }

    // Display Result
    printf("Resultant Matrix (2A + 3B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
