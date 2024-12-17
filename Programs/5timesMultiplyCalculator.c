#include <stdio.h>

int main() {
    double n, m, result;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &n);

    printf("Enter another number: ");
    scanf("%lf", &m);

    printf("Enter operator: ");
    scanf(" %c", &op);

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
                if (m != 0) {
                    result = n / m;
                } else {
                    printf("Error: Division by zero\n");
                    return 1;
                break;
            default:
                printf("Invalid operator\n");
                return 1;  // Exit the program with an error code
        }
        printf("Result: %lf\n", result);

        // Update n and m for the next iteration
        n = result;

        // If you want to continue, read the operator for the next iteration
        printf("Enter operator: ");
        scanf(" %c", &op);
    }
    }

    return 0;
}

