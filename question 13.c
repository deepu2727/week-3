// Write a program using pointers to interchange the second biggest and the second smallest number in the array
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr; // pointer to array

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }

    // Find smallest and second smallest
    int smallest = *p, second_smallest = __INT_MAX__;
    int largest = *p, second_largest = -__INT_MAX__;
    int idx_smallest = 0, idx_second_smallest = -1;
    int idx_largest = 0, idx_second_largest = -1;

    for (i = 0; i < n; i++) {
        if (*(p + i) < smallest) {
            second_smallest = smallest;
            idx_second_smallest = idx_smallest;
            smallest = *(p + i);
            idx_smallest = i;
        } else if (*(p + i) < second_smallest && *(p + i) != smallest) {
            second_smallest = *(p + i);
            idx_second_smallest = i;
        }

        if (*(p + i) > largest) {
            second_largest = largest;
            idx_second_largest = idx_largest;
            largest = *(p + i);
            idx_largest = i;
        } else if (*(p + i) > second_largest && *(p + i) != largest) {
            second_largest = *(p + i);
            idx_second_largest = i;
        }
    }

    // Swap second smallest and second largest
    if (idx_second_smallest != -1 && idx_second_largest != -1) {
        int temp = *(p + idx_second_smallest);
        *(p + idx_second_smallest) = *(p + idx_second_largest);
        *(p + idx_second_largest) = temp;
    }

    // Display result
    printf("Array after interchange:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
