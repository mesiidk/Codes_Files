#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int hf = 1;
    for(int i = 1; i < n; i++) {
        if(n%i==0) hf = i;
    }
    printf("The highest factor is %d: ",hf);

    return 0;
}
