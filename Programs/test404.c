#include <stdio.h>

int main() {
    // Assuming x and n are non-negative integers
    unsigned int x, n;

    // Read values for x and n
    printf("Enter the value for x: ");
    scanf("%u", &x);

    printf("Enter the value for n: ");
    scanf("%u", &n);

    // Calculate y = 2^n
    unsigned int y = 1 << n;

    // Calculate x mod y
    unsigned int result_mod = x % y;

    // Calculate x & (y - 1)
    unsigned int result_and = x & (y - 1);

    // Print the results
    printf("x mod y: %u\n", result_mod);
    printf("x & (y - 1): %u\n", result_and);

    return 0;
}

