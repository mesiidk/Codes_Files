#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++) {
        if(n%i==0) {
            printf("%d is composite\n", n);
        }
    }

    return 0;
}
