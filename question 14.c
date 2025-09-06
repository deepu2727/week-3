// Writea a menu driven program to read and display a p*q*r matrix. Also find the sum, transpose, and product of the two p*q*r matrices

#include <stdio.h>

#define MAX 10

void readMatrix(int p, int q, int r, int a[MAX][MAX][MAX]) {
    int i, j, k;
    printf("Enter elements of matrix (%d x %d x %d):\n", p, q, r);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
}

void displayMatrix(int p, int q, int r, int a[MAX][MAX][MAX]) {
    int i, j, k;
    printf("Matrix (%d x %d x %d):\n", p, q, r);
    for (i = 0; i < p; i++) {
        printf("Slice %d:\n", i + 1);
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void sumMatrix(int p, int q, int r, int a[MAX][MAX][MAX], int b[MAX][MAX][MAX], int c[MAX][MAX][MAX]) {
    int i, j, k;
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                c[i][j][k] = a[i][j][k] + b[i][j][k];
            }
        }
    }
}

void transposeMatrix(int p, int q, int r, int a[MAX][MAX][MAX], int t[MAX][MAX][MAX]) {
    int i, j, k;
    // Transpose between q and r dimensions
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                t[i][k][j] = a[i][j][k];
            }
        }
    }
}

void productMatrix(int p, int q, int r, int a[MAX][MAX][MAX], int b[MAX][MAX][MAX], int c[MAX][MAX][MAX]) {
    int i, j, k, l;
    // Multiply slice by slice: each slice is (q × r)
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                c[i][j][k] = 0;
                for (l = 0; l < r; l++) {
                    c[i][j][k] += a[i][j][l] * b[i][l][k];
                }
            }
        }
    }
}

int main() {
    int p, q, r, choice;
    int A[MAX][MAX][MAX], B[MAX][MAX][MAX], C[MAX][MAX][MAX];

    printf("Enter dimensions (p q r): ");
    scanf("%d %d %d", &p, &q, &r);

    do {
        printf("\nMenu:\n");
        printf("1. Read two matrices\n");
        printf("2. Display matrices\n");
        printf("3. Sum of matrices\n");
        printf("4. Transpose of first matrix\n");
        printf("5. Product of matrices\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                readMatrix(p, q, r, A);
                readMatrix(p, q, r, B);
                break;
            case 2:
                displayMatrix(p, q, r, A);
                displayMatrix(p, q, r, B);
                break;
            case 3:
                sumMatrix(p, q, r, A, B, C);
                displayMatrix(p, q, r, C);
                break;
            case 4:
                transposeMatrix(p, q, r, A, C);
                displayMatrix(p, r, q, C);
                break;
            case 5:
                productMatrix(p, q, r, A, B, C);
                displayMatrix(p, q, r, C);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
