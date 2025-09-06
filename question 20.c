// Write a program that reads a square matrix of size n*n.Write a function int is Symmetric (int a[][],int n)that returns 1 if the matrix is symmetric

#include <stdio.h>

// Function to check if matrix is symmetric
int isSymmetric(int a[20][20], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
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

    if (isSymmetric(a, n))
        printf("The matrix IS SYMMETRIC.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}
