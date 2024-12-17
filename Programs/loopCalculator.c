
#include <stdio.h>

int main() {
    double n, m, result;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &n);

    printf("Enter another number: ");
    scanf("%lf", &m);

    printf("Enter operator: ");
    scanf(" %c", &op);  // Use %c to read a single character, and add a space before %c to consume any leading whitespace

    for (int i = 1; i <= 5; i++) {
        switch (op) {
            case '+':
                result = n + m;
                break;
            case '-':
                result = n - m;
                break;
            case '*':
                result = n * m;
                break;
            case '/':
                result = n / m;
                break;
            default:
                printf("Invalid operator\n");
                return 1;  // Exit the program with an error code
        }
        printf("Result: %lf\n", result);

        // If you want to continue using the result in the next iteration, update n and m
        n = result;
        printf("Enter operator: ");
        scanf(" %c", &op);  // Read the operator for the next iteration
    }

    return 0;
}
