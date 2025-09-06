// Write a program to read floating point array. Update the array to insert a new number at the specified location
#include <stdio.h>

int main() {
    int n, pos, i;
    float num;

    printf("Enter size of array: ");
    scanf("%d", &n);

    float arr[50];  // max size assumed

    printf("Enter %d floating point numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Enter number to insert: ");
    scanf("%f", &num);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert number
    arr[pos] = num;
    n++;  // increase size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}
