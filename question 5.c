//Write a program to compute the sum and mean of the elements of a two-dimensional array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;
    float mean;

    // Step 1: Input size
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Step 2: Input array elements
    printf("Enter elements of the %dx%d array:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 3: Calculate sum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    // Step 4: Calculate mean
    mean = (float)sum / (rows * cols);

    // Step 5: Display results
    printf("\nSum of all elements = %d\n", sum);
    printf("Mean of all elements = %.2f\n", mean);

    return 0;
}
