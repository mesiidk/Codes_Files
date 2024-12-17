#include <stdio.h>

int main() {
    char a = 'b';

    for(char b = a; b <= 'z'; b++) {
        printf("%c ", b);
    }
    printf("\n");

    return 0;
}
