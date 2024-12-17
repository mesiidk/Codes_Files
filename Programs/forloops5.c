#include <stdio.h>

int main() {
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    for(; i<=20; i = i + 3) {
        printf("%d ", i);
    }

    return 0;
}
