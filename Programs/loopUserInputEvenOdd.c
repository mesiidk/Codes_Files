
#include <stdio.h>

int main() {
    int i;

    printf("Enter a Number: ");
    scanf("%d", &i);
    printf("\nThe Number You Have Entered Is %d,This Number Will Print (1-100) Even or Odd According To Your Number...\n", i);

    for(; i <= n; i++) {
        if(i%2==0) {
                printf("\n%d (Even)", i);
        } else {
            printf(" %d (Odd)", i);


        }
    }


    return 0;
}
