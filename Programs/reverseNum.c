#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reverseNum = 0;
    while (n != 0) {    //We can also use (n > 0)
        reverseNum = reverseNum*10;
        reverseNum = reverseNum + (n%10);
        n = n / 10;
    }
        printf("The reverseNum is %d", reverseNum);

    return 0;
}
