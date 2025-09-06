//  write a program that reads an array of 100 integersa display all the paris of elemts where sum is 50 
#include <stdio.h>

int main() {
    int arr[100];
    int i, j;

    // Step 1: Input 100 integers
    printf("Enter 100 integers:\n");
    for (i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 2: Find and display pairs with sum = 50
    printf("\nPairs of elements with sum = 50:\n");
    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (arr[i] + arr[j] == 50) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
