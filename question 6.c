// Write a program to read and display a square
#include <stdio.h>

// Function to read a square matrix
void readMatrix(int arr[10][10], int n) {
    int i, j;
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to display a square matrix
void displayMatrix(int arr[10][10], int n) {
    int i, j;
    printf("\nThe %dx%d matrix is:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // new line after each row
    }
}

int main() {
    int n;
    int arr[10][10];

    printf("Enter size of square matrix (max 10): ");
    scanf("%d", &n);

    // Call functions
    readMatrix(arr, n);
    displayMatrix(arr, n);

    return 0;
}
