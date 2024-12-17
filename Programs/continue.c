#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n <= 100) {
        printf("%d ", n);
        n++;
    if (n > 50) {
        break;
    }
    }

    return 0;
}
