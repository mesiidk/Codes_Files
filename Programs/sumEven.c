#include <stdio.h>

int main() {
    int n, sumEven = 0;

    // Input: Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate the sum of even digits
    while (n != 0) {
        int digit = n % 10;

        // Check if the digit is even
        if (digit % 2 == 0) {
            sumEven += digit;
        }

        // Move to the next digit
        n = n / 10;
    }

    // Output: Print the sum of even digits
    printf("The sum of even digits is: %d\n", sumEven);

    return 0;
}
