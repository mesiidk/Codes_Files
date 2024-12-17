#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n <= 500; n++) {
        printf("%d\n", n);
        if(n == 153)
            break;
    }
    printf("\n");

    return 0;
}
