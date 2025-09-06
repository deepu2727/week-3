//  Write a program to count the total number of non zero elements in a two-dimensional array.
#include <stdio.h>

int main() {
    int rows, cols, i, j, count = 0;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input elements
    printf("Enter elements of the %dx%d array:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Count non-zero elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] != 0) {
                count++;
            }
        }
    }

    // Display result
    printf("Total number of non-zero elements = %d\n", count);

    return 0;
}
