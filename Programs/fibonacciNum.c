#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fibonacci = 0;
    int a = 0;
    int b = 1;
    for(int i = 1; i <= n; i++) {
        fibonacci = a + b;
        a = b;
        b = fibonacci;
        printf("The %d", i);
        if (i == 1) {
        printf("st");
        }
        else if (i == 2) {
            printf("nd");
        }
        else if (i==3) {
            printf("rd");
        }
        else {
            printf("th");
        }
        printf(" fibonacci number is %d\n", a);
    }


    return 0;
}
