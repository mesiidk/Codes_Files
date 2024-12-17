#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int hf = 1;
    for(int i = n/2; i>=1; i--) {
        if(n%i==0) {
            hf = i;
            break;
        }
    }
    printf("Highest factor is %d: ", hf);

    return 0;
}
