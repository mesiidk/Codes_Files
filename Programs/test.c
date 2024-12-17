#include <stdio.h>

int main() {
    int i;

    printf("Enter a Number: ");
    scanf("%d", &i);
    printf("\nThe Number You Have Entered Is %d. This Program Will Print Even or Odd Numbers from %d to 100 According To Your Input...\n", i, i);

    for (i; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("\n%d (Even) ", i);
        } else {
            printf("%d (Odd) ", i);
        }
    }

    return 0;
}


