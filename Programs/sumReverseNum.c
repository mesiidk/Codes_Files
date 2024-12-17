#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int reverseNum = 0;
    int originalNum = n;  // Store the original number for sum calculation
    int sumReverseNum = 0; // Variable to accumulate the sum of reversed numbers

    while (n > 0) {
        reverseNum = reverseNum * 10;
        reverseNum = reverseNum + (n % 10);
        n = n / 10;

    }

    sumReverseNum = originalNum + reverseNum;  // Calculate the sum

    printf("The SumreverseNum number is %d", sumReverseNum);
    return 0;
}
