#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fibonacci;
    int a = 0;
    int b = 1;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            fibonacci = a;
        } else {
            fibonacci = a + b;
            a = b;
            b = fibonacci;
        }
        printf("The %d", i);
        if (i == 1) {
            printf("st");
        } else if (i == 2) {
            printf("nd");
        } else if (i == 3) {
            printf("rd");
        } else {
            printf("th");
        }
        printf(" fibonacci number is %d\n", fibonacci);
    }

    return 0;
}
