#include <stdio.h>

int main() {
    int i;
    int n;

    for(n = 1; n <= 20; n++){
        for(i = 1; n <= 10; n++){
        printf("%d X %d = %d\n", i, n, n*i);
    }
    }
    return 0;
}
