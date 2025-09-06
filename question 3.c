// write a program to interchange the second element with the second last element 
#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Input array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Display original array
    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 4: Swap 2nd element with 2nd last element
    if (n >= 2) {
        int temp = arr[1];             // second element (index 1)
        arr[1] = arr[n - 2];           // second last element (index n-2)
        arr[n - 2] = temp;
    }

    // Step 5: Display updated array
    printf("\n\nArray after swapping second and second last elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
