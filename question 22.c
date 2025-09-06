// Write a program to illustrate teh use of a pointer that points to a 2D array
#include <stdio.h>

int main() {
    int arr[3][3], i, j;

    // Pointer to 2D array (array of 3 ints per row)
    int (*p)[3];

    // Assign pointer
    p = arr;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &p[i][j]);  // using pointer to access
        }
    }

    printf("Matrix elements using pointer:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", p[i][j]);  // accessing via pointer
        }
        printf("\n");
    }

    return 0;
}
