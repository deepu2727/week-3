// Write a program that reads a matrix and displays the sum of the elemtents above the main diagonal(Hint: Have to calculate the sum of elements Aij where i<j)
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum of elements above main diagonal (i < j)
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            sum += a[i][j];
        }
    }

    printf("Sum of elements above main diagonal = %d\n", sum);

    return 0;
}
