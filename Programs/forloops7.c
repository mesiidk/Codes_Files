#include <stdio.h>

int main() {
    int n;
    int i = 2;

    for(n = 2; n<=100; n++) {
        printf("%d ", n, i, n+i);
    }

    return 0;
}
