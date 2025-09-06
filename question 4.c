//  Write a program that calculates the sum of squares of the elements.
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    // Step 1: Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Input array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Calculate sum of squares
    for (i = 0; i < n; i++) {
        sum += arr[i] * arr[i];
    }

    // Step 4: Display result
    printf("\nSum of squares of elements = %d\n", sum);

    return 0;
}
