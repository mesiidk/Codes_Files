#include <stdio.h>

int main() {
    int n;

    for(n = 1; n <= 20; n++) {
        for(int i = 1; i <= 20; i++) {
            printf("%d X %d = %d\n", n, i, n*i);
        }
    }

    return 0;
}
