// Write a program to delete all the duplicate entries from an array of n integers
#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements left
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;   // reduce array size
                j--;   // check the new element at index j
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
