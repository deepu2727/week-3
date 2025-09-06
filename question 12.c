// Write a program to read two floating point number arrays.Merge the two arrays and display the resultant array in reverse order
#include <stdio.h>

int main() {
    int n1, n2, i, j;
    
    // Input sizes of the two arrays
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    
    float arr1[n1], arr2[n2], merged[n1 + n2];
    
    // Read first array
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%f", &arr1[i]);
    }
    
    // Read second array
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%f", &arr2[i]);
    }
    
    // Merge arrays
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }
    
    // Display merged array in reverse
    printf("Merged array in reverse order:\n");
    for (i = n1 + n2 - 1; i >= 0; i--) {
        printf("%.2f ", merged[i]);  // %.2f → prints two decimal places
    }
    
    return 0;
}
