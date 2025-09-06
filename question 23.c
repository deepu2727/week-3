// Write a program to enter a number and break it into n number of digits
#include <stdio.h>

int main() {
    int num, temp, digits[20], count = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Extract digits from the number (in reverse order)
    while (temp > 0) {
        digits[count] = temp % 10;  // store last digit
        temp = temp / 10;           // remove last digit
        count++;
    }

    // Display digits in correct order
    printf("The digits of %d are:\n", num);
    for (i = count - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    return 0;
}
