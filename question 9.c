//Write a program that computes the product of the elements that are stored on the diagonal above the main diagonal.
#include <stdio.h>

int main() {
    int n, i, j;
    long long product = 1; // use long long to avoid overflow

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    // Input matrix
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Compute product of elements on and above main diagonal
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {   // start from column = row (main diagonal)
            product *= a[i][j];
        }
    }

    // Display result
    printf("Product of elements on and above main diagonal = %lld\n", product);

    return 0;
}
