// Write a program to add two 3 ¥ 3 matrix using pointers.
#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3];
    int *p, *q, *r;
    int i, j;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Assign base addresses to pointers
    p = &a[0][0];
    q = &b[0][0];
    r = &sum[0][0];

    // Add matrices using pointers
    for (i = 0; i < 9; i++) {
        *(r + i) = *(p + i) + *(q + i);
    }

    // Display the result
    printf("Sum of two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
