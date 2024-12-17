#include <stdio.h>

int main() {
    int n, m;
    printf("Enter a base: ");
    scanf("%d", &n);
    printf("Enter a power: ");
    scanf("%d", &m);
    int power = 1;
    for(int i =1; i <= m; i++) {
        power = power * n;
    }
    printf("%d raised to the power %d is %d", n, m, power);



    return 0;
}
