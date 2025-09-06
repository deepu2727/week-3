//  Write a program to input the elements of a two dimensional array. Then from this array, make two arrays—one that stores all odd elements of the  two-dimensional array and the other that stores all even elements of the array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int evenArr[100], oddArr[100]; // arrays to store even and odd numbers
    int evenCount = 0, oddCount = 0;

    // Input dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input array elements
    printf("Enter elements of %dx%d array:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);

            // Check odd/even while reading
            if (arr[i][j] % 2 == 0) {
                evenArr[evenCount++] = arr[i][j];
            } else {
                oddArr[oddCount++] = arr[i][j];
            }
        }
    }

    // Display odd elements
    printf("\nOdd elements:\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    // Display even elements
    printf("\n\nEven elements:\n");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    printf("\n");
    return 0;
}
