//  Write a program that computes the sum of the elements that are stored on the main diagonal of a matrix using pointers.
#include <stdio.h>

int main() {
    int n, i;
    int arr[10][10];
    int sum = 0;

    printf("Enter size of square matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (i = 0; i < n * n; i++) {
        scanf("%d", (*(arr) + i));  // using pointer to read elements
    }

    // Compute sum of diagonal using pointers
    for (i = 0; i < n; i++) {
        sum += *(*(arr + i) + i);  // element at [i][i]
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
