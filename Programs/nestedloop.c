#include <stdio.h>

int main() {
    int n, i;
    for(i = 1; i <= 10; i++) {
        for(n = 1; n <= 10; n++) {
                printf("%d X %d = %d\n", i, n, n*i);

        }
    }

    return 0;
}
